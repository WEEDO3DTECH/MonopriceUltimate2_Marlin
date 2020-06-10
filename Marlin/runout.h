/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * runout.h - Runout sensor support
 */

#ifndef _RUNOUT_H_
#define _RUNOUT_H_

#include "cardreader.h"
#include "printcounter.h"
#include "stepper.h"
#include "Marlin.h"

#include "MarlinConfig.h"

#define FIL_RUNOUT_THRESHOLD 50000

#if ENABLED(FILAMENT_RUNOUT_SENSOR)

class FilamentRunoutSensor {
  public:
    FilamentRunoutSensor() {}

    static void setup();

    FORCE_INLINE static void reset() { runout_count = 0; filament_ran_out = false; }

    FORCE_INLINE static void run() {
      if ((IS_SD_PRINTING || print_job_timer.isRunning()) && check() && !filament_ran_out && filament_check_enable) {
        filament_ran_out = true;
        enqueue_and_echo_commands_P(PSTR(FILAMENT_RUNOUT_SCRIPT));
        planner.synchronize();
      }
    }

	FORCE_INLINE static void enable() { filament_check_enable = true; }
	FORCE_INLINE static void disable() { filament_check_enable = false; }

  private:
    static bool filament_ran_out;
    static uint16_t runout_count;
	static bool filament_check_enable;		

    FORCE_INLINE static bool check() {
		if (READ(FIL_RUNOUT_PIN) == FIL_RUNOUT_INVERTING)
		{	
			if (runout_count >= FIL_RUNOUT_THRESHOLD)
			{
				return true;
			}
			else
			{
				runout_count++;
				return false;
			}
		}
		else
		{
			runout_count = 0;
			return false;
		}
    }
};

extern FilamentRunoutSensor runout;
#endif

#endif // _RUNOUT_H_

/**
* Copyright (C) 2019 WEEDO3D
* Author: perron@163.com
*/

#include "WTCMD.h"
#include "parser.h"
#include "ultralcd.h"
#include "cardreader.h"
#include "printcounter.h"
#include "duration_t.h"
#include "buzzer.h"
#include "configuration_store.h"
#include "planner.h"

extern void menu_action_submenu(screenFunc_t func);
extern void wtlcd_ShowUploadingScreen();
extern void wtlcd_ShowUploadFailScreen();
extern void wt_restart();
extern void lcd_sdcard_stop();
extern void lcd_return_to_status();
extern void lcd_main_menu();
extern CardReader card;

WT_STATUS wt_machineStatus = WT_STATUS::IDLE;

extern Buzzer buzzer;

char uploadFilename[FILENAME_LENGTH];


static void GetMachineStatus()
{
	SERIAL_ECHOPGM("MStatus:");
	SERIAL_ECHO(wt_machineStatus);

	SERIAL_ECHOPGM(" MFile:");
	card.printFilename();

	char buffer[21];
	duration_t elapsed = print_job_timer.duration();
	elapsed.toString(buffer);

	SERIAL_ECHOPGM(" MTime:");
	SERIAL_ECHO(buffer);

	SERIAL_ECHOPGM(" MPercent:");
	card.getStatus();

	SERIAL_EOL();
}

void wt_CloseUploadScreen()
{
	buzzer.tone(30, 1000);
	lcd_return_to_status();
}

void wt_FilamentRunout()
{
	LCD_MESSAGE(MMSG_FILAMENT_RUNOUT[wtvar_language]);
	enqueue_and_echo_commands_P(PSTR("M25"));
	planner.synchronize();
	LCD_MESSAGE(MMSG_FILAMENT_RUNOUT[wtvar_language]);
}


extern uint8_t lcd_status_update_delay;
// W Command Process
void WTCMD_Process()
{
	switch (parser.codenum)
	{
	case 106:		
		memset(uploadFilename, 0, FILENAME_LENGTH);
		if (strlen(parser.string_arg) <= FILENAME_LENGTH)
			strcpy(uploadFilename, parser.string_arg);
		else
			strncpy(uploadFilename, parser.string_arg, FILENAME_LENGTH);
		wtlcd_ShowUploadingScreen();
		break;

	case 107:		
		wt_CloseUploadScreen();
		break;

	case 201:	
		GetMachineStatus();
		break;

	case 202:	
		card.appendFile(parser.string_arg);
		break;

	case 203:
		wt_restart();
		while (1);
		break;

	case 209:		
		lcd_sdcard_stop();
		break;

	case 211:	
		wt_FilamentRunout();
		break;
		

	default:
		 parser.unknown_command_error();

	}

}
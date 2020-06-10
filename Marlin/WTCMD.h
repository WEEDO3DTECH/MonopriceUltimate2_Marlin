/**
* Copyright (C) 2019 WEEDO3D
* Author: perron@163.com
*/

#ifndef WTCMD_H
#define WTCMD_H

enum WT_STATUS : char {
	IDLE = 0, 
	PRINTING = 1,
	PAUSE = 2,
	ABORT = 3,
	FINISH = 4
};

extern WT_STATUS wt_machineStatus;

void WTCMD_Process();

#endif


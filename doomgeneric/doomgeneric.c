#include "doomgeneric.h"
#include <stdio.h>
#include <malloc.h>

uint32_t* DG_ScreenBuffer = 0;


void dg_Create()
{
	DG_ScreenBuffer = malloc(DOOMGENERIC_RESX * DOOMGENERIC_RESY * 4);
	memset(DG_ScreenBuffer, 0, DOOMGENERIC_RESX * DOOMGENERIC_RESY * 4);

	DG_Init();
}


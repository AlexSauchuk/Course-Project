#pragma once

#include "resource.h"

#define BLOCK_SIZE 30
#define BLOCK_SIZE_SMALL 20
#define BLOCKS_COUNT 10
#define WINDOW_WIDTH BLOCK_SIZE*(BLOCKS_COUNT+2.5)
#define WINDOW_HEIGHT 550
#define FIELD_START (WINDOW_HEIGHT/8)
#define PLAYING_FIELD (FIELD_START+BLOCK_SIZE*BLOCKS_COUNT)
#define NEW_FIGURE_WIDTH (2*(BLOCK_SIZE-BLOCK_SIZE_SMALL)+BLOCK_SIZE*BLOCKS_COUNT)/3
#define NEW_FIGURE_HEIGHT WINDOW_HEIGHT-PLAYING_FIELD

enum BlockColors
{
	DEFAULT = RGB(225, 225, 225),
	RED = RGB(230, 92, 40),
	LIGHTGREEN = RGB(72, 250, 5),
	YELLOW = RGB(248, 248, 5),
	ORANGE = RGB(255, 163, 77),
	GREEN = RGB(0, 204, 102),
	PURPLE = RGB(112, 112, 184),
	PINK = RGB(255, 55, 155),
	BLUE = RGB(0, 128, 192),
	DARKGREEN= RGB(0, 138, 69)
};
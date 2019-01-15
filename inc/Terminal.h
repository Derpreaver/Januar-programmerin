#ifndef _TERMINAL_H_
#define _TERMINAL_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f30x_conf.h"
#include "30010_io.h"
#include <stdio.h>
#include <string.h>

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define ESC 0x1B
/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
/****************************/
/***** Colour Functions *****/
/****************************/

void fgcolor(int foreground);
void bgcolor(int background);
void color(int foreground, int background);
void resetbgcolor();

/*****************************/
/***** Terminal Functions ****/
/*****************************/

void clrscr();
void clreol();
void gotoxy(int x,int y);
void window(int x1,int y1,int x2, int y2,char title[]);

#endif /* _Terminal_H_ */

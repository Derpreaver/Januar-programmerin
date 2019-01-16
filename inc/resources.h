#ifndef _RESOURCES_H_
#define _RESOURCES_H_

#include "30010_io.h"
#include "stm32f30x_conf.h"
#include "charset.h"
#include <string.h>
//Uses a timer function, set up so that every interrupt increases a var by one, this var MUST be called "restime" (otherwise this var
//should be renamed everywhere in resources.c)
//this should be in your main.c
//int restime = 0;
//void TIM2_IRQHandler(void)
//{
//restime++;
//TIM2->SR &= ~0x0001; // Clear interrupt bit
//}
//remember to call lcd_update_res in while loop in main




void lcd_write_res(char strhealth[],char strfuel[],char stroxygen[],char strscore[]); // 512/4 = 128, y_max = 4, x_max = 128


void lcd_update_res(int *restime, int *health, int *oxygen, int *fuel, int *score);







#endif


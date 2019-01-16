#ifndef _JOYSTICK_H_
#define _JOYSTICK_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f30x_conf.h"
#include "30010_io.h"
#include <stdio.h>

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

/****************************/
/*** Joystick Functions ***/
/****************************/

void Init_Joystick();
int Update_Joystick_Input();


#endif /* _JOYSTICK_H_ */
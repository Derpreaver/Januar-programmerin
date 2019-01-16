#ifndef _LCD_WRITE_H_
#define _LCD_WRITE_H_

#include "30010_io.h"
#include "stm32f30x_conf.h"
#include "charset.h"
#include <string.h>

void lcd_write_string(char str[], int *x, int *texttime, int line);
//if line = 0 write on first line
//if line = 3 write on last line (4th)



#endif

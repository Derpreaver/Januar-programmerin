#include "lcd_write.h"


void lcd_write_string(char str[], int *x, int *texttime, int line)
{
    char Buffer[512];
    int i=0,k=0;
    memset(Buffer,0x00,512);
    if ((*texttime) > 24)
    {
        (*x) = (*x) - 3;
        (*texttime) = 0;
    }
    if ((*x) < 0)
    {
        (*x) = 128 - strlen(str)*6;
    }
    for (i = 0; i < strlen(str); i++)
        {
            for (k = 0; k < 6; k++)
            {
                Buffer[(*x) + k + i*6 + 128*line] = character_data[str[i] - 0x20][k];
            }
        }
    lcd_push_buffer(Buffer);
}

#include "resources.h"



void lcd_write_res(char strhealth[],char strfuel[],char stroxygen[],char strscore[]) // 512/4 = 128, y_max = 4, x_max = 128
{
    char Buffer[512];
    int i=0,k=0,j=0;
    memset(Buffer,0x00,512);

        //Print health icon on LCD
        for (j = 0; j < 6; j++)
        {
            Buffer[j] = character_data[0x5F][j];
        }

        //Print fuel icon on LCD
        for (j = 0; j < 6; j++)
        {
            Buffer[j + 128] = character_data[0x61][j];
        }

        //Print oxygen icon on LCD
        for (j = 0; j < 6; j++)
        {
            Buffer[j + 128 * 2] = character_data[0x62][j];
        }

        //Print score icon on LCD
        for (j = 0; j < 6; j++)
        {
            Buffer[j + 128 * 3] = character_data[0x63][j];
        }

        //Print health value next to corresponding icon on LCD
        for (i = 0; i < strlen(strhealth); i++)
        {
            for (k = 0; k < 6; k++)
            {
                Buffer[10 + k + i*6] = character_data[strhealth[i] - 0x20][k];
            }
        }

        //Print fuel value next to corresponding icon on LCD
        for (i = 0; i < strlen(strfuel); i++)
        {
            for (k = 0; k < 6; k++)
            {
                Buffer[10 + 128 + k + i*6] = character_data[strfuel[i] - 0x20][k];
            }
        }

        //Print oxygen value next to corresponding icon on LCD
        for (i = 0; i < strlen(stroxygen); i++)
        {
            for (k = 0; k < 6; k++)
            {
                Buffer[10 + 128 * 2 + k + i*6] = character_data[stroxygen[i] - 0x20][k];
            }
        }

        //Print score value next to corresponding icon on LCD
        for (i = 0; i < strlen(strscore); i++)
        {
            for (k = 0; k < 6; k++)
            {
                Buffer[10 + 128 * 3 + k + i*6] = character_data[strscore[i] - 0x20][k];
            }
        }

lcd_push_buffer(Buffer);
}

void lcd_update_res(int *restime, int *health, int *oxygen, int *fuel, int *score)
{
    char stroxy[4],strhlt[4],strfuel[4],strscor[4];

        if (*restime >= 50 && (*oxygen) != 0)
        {
            (*restime) = 0;
            (*oxygen)--;
        }
        else if ((*restime) >= 50 && (*oxygen) == 0 && (*health) != 0)
        {
            (*restime) = 0;
            (*health)--;
        }

        sprintf(stroxy,"%03d",*oxygen);
        sprintf(strhlt,"%03d",*health);
        sprintf(strfuel,"%03d",*fuel);
        sprintf(strscor,"%03d",*score);
        lcd_write_res(strhlt,strfuel,stroxy,strscor);
}


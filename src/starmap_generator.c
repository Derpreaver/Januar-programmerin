#include "starmap_generator.h"


void stargen(int level,char starmap[30][75])
{
    int i,j;
    char amap[30][75],bmap[30][75],cmap[30][75];
    int levela, levelb, levelc;
    if (level == 1)
        {
            levela = 2;
            levelb = 2;
            levelc = 2;
        }
    if (level == 2)
        {
            levela = 3;
            levelb = 2;
            levelc = 2;
        }
    if (level == 3)
        {
            levela = 2;
            levelb = 3;
            levelc = 2;
        }
    if (level == 4)
        {
            levela = 2;
            levelb = 2;
            levelc = 3;
        }
    if (level == 5)
        {
            levela = 3;
            levelb = 3;
            levelc = 2;
        }
    if (level == 6)
        {
            levela = 3;
            levelb = 2;
            levelc = 3;
        }
    if (level == 7)
        {
            levela = 2;
            levelb = 3;
            levelc = 3;
        }
    else
        {
            levela = 3;
            levelb = 3;
            levelc = 3;
        }


    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < 75; j++)
        {
            starmap[i][j] = 0;
            amap[i][j] = rand() % levela;
            bmap[i][j] = rand() % levelb;
            cmap[i][j] = rand() % levelc;
        }
    }

    for (i = 0; i < 30; i++)
        {
            for (j = 0; j < 75; j++)
                {
                    if (amap[i][j] == 1 && bmap[i][j] == 1 && cmap[i][j] == 1)
                    {
                        starmap[i][j] = 1;
                    }
                    else
                    {
                        starmap[i][j] = 0;
                    }
                }
        }
}


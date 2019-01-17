#ifndef _MENU_H_
#define _MENU_H_

/* Includes ------------------------------------------------------------------*/
#include "30010_io.h"
#include "Terminal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void Game_Over(int x1, int y1,int x2, int y2, int score);
void Main_menu(int x1,int y1,int x2,int y2);
void Title_make(int x1,int y1,int x2,int y2);
void Level_title_make(int x1,int y1,int x2,int y2);
void Level_number_make(int x1,int y1,int x2,int y2, int level);



#endif /* _Menu_H_ */

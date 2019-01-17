#include "Menu.h"
/* The Main menu */
void Main_menu(int x1,int y1,int x2,int y2)
{
    /*
    gotoxy(x1 + 16, y1 + 11);
    printf("%c,Help Page",0x1A);
    gotoxy(x1 + 16, y1 + 14);
    printf("%c,Score Board",0x1B);
    gotoxy(x1 + 16, y1 + 11);
    printf("%c,Help Page",0x1A);
    gotoxy(x1 + 16, y1 + 14);
    printf("%c,Score Board",0x1B);
    */

    /*MAIN MENU*/
    //M
    gotoxy(x1 + 5,y1 + 3);
    printf("%c%c %c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 5,y1 + 4);
    printf("%c %c %c",0xDB,0xDF,0xDB);
    gotoxy(x1 + 5,y1 + 5);
    printf("%c   %c",0xDB,0xDB);
    //A
    gotoxy(x1 + 11,y1 + 3);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 11,y1 + 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 11,y1 + 5);
    printf("%c  %c",0xDB,0xDB);
    //I
    gotoxy(x1 + 15,y1 + 3);
    printf(" %c%c%c ",0xDF,0xDB,0xDF);
    gotoxy(x1 + 15,y1 + 4);
    printf("  %c  ",0xDB);
    gotoxy(x1 + 15,y1 + 5);
    printf(" %c%c%c ",0xDC,0xDB,0xDC);
    //N
    gotoxy(x1 + 21,y1 + 3);
    printf("%c%c  %c",0xDB,0xDC,0xDB);
    gotoxy(x1 + 21,y1 + 4);
    printf("%c %c %c",0xDB,0xFE,0xDB);
    gotoxy(x1 + 21,y1 + 5);
    printf("%c  %c%c",0xDB,0xDF,0xDB);
    //M
    gotoxy(x1 + 33,y1 + 3);
    printf("%c%c %c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 33,y1 + 4);
    printf("%c %c %c",0xDB,0xDF,0xDB);
    gotoxy(x1 + 33,y1 + 5);
    printf("%c   %c",0xDB,0xDB);
    //E
    gotoxy(x1 + 39,y1 + 3);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 39,y1 + 4);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 39,y1 + 5);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //N
    gotoxy(x1 + 45,y1 + 3);
    printf("%c%c  %c",0xDB,0xDC,0xDB);
    gotoxy(x1 + 45,y1 + 4);
    printf("%c %c %c",0xDB,0xFE,0xDB);
    gotoxy(x1 + 45,y1 + 5);
    printf("%c  %c%c",0xDB,0xDF,0xDB);
    //U
    gotoxy(x1 + 51,y1 + 3);
    printf("%c   %c",0xDB,0xDB);
    gotoxy(x1 + 51,y1 + 4);
    printf("%c   %c",0xDB,0xDB);
    gotoxy(x1 + 51,y1 + 5);
    printf("%c%c%c%c%c",0xDF,0xDC,0xDC,0xDC,0xDF);



    /*NEW GAME*/
    //N
    gotoxy(x1 + 5,y1 + 7);
    printf("%c%c  %c",0xDB,0xDC,0xDB);
    gotoxy(x1 + 5,y1 + 8);
    printf("%c %c %c",0xDB,0xFE,0xDB);
    gotoxy(x1 + 5,y1 + 9);
    printf("%c  %c%c",0xDB,0xDF,0xDB);
    //E
    gotoxy(x1 + 11,y1 + 7);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 11,y1 + 8);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 11,y1 + 9);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //W
    gotoxy(x1 + 17,y1 + 7);
    printf("%c %c %c",0xDB,0xDB,0xDB);
    gotoxy(x1 + 17,y1 + 8);
    printf("%c %c %c",0xDB,0xDB,0xDB);
    gotoxy(x1 + 17,y1 + 9);
    printf("%c%c%c%c%c",0xDF,0xDB,0xDF,0xDB,0xDF);
    //G
    gotoxy(x1 + 25,y1 + 7);
    printf("%c%c%c%c ",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 25,y1 + 8);
    printf("%c  %c%c%c",0xDB,0xDC,0xDC,0xDC);
    gotoxy(x1 + 25,y1 + 9);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDB);
    //A
    gotoxy(x1 + 34,y1 + 7);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 34,y1 + 8);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 34,y1 + 9);
    printf("%c  %c",0xDB,0xDB);
    //M
    gotoxy(x1 + 40,y1 + 7);
    printf("%c%c %c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 40,y1 + 8);
    printf("%c %c %c",0xDB,0xDF,0xDB);
    gotoxy(x1 + 40,y1 + 9);
    printf("%c   %c",0xDB,0xDB);
    //E
    gotoxy(x1 + 46,y1 + 7);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 46,y1 + 8);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 46,y1 + 9);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);

    gotoxy(x1,y1);
}

void Game_Over(int x1, int y1,int x2, int y2, int score)
{
    //G
    gotoxy(x1 + 5,y1 + 7);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 5,y1 + 8);
    printf("%c %c%c%c",0xDB,0xDC,0xDC,0xDC);
    gotoxy(x1 + 5,y1 + 9);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDF);
    //A
    gotoxy(x1 + 10,y1 + 7);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 10,y1 + 8);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 10,y1 + 9);
    printf("%c  %c",0xDB,0xDB);
    //M
    gotoxy(x1 + 15,y1 + 7);
    printf("%c%c %c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 15,y1 + 8);
    printf("%c %c %c",0xDB,0xDF,0xDB);
    gotoxy(x1 + 15,y1 + 9);
    printf("%c   %c",0xDB,0xDB);
    //E
    gotoxy(x1 + 21,y1 + 7);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 21,y1 + 8);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 21,y1 + 9);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);




    //O
    gotoxy(x1 + 30,y1 + 7);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 30,y1 + 8);
    printf("%c  %c",0xDB,0xDB);
    gotoxy(x1 + 30,y1 + 9);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDF);
    //V
    gotoxy(x1 + 35,y1 + 7);
    printf("%c   %c",0xDB,0xDB);
    gotoxy(x1 + 35,y1 + 8);
    printf(" %c %c",0xDB,0xDB);
    gotoxy(x1 + 35,y1 + 9);
    printf("  %c",0xDB);
    //E
    gotoxy(x1 + 41,y1 + 7);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 41,y1 + 8);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 41,y1 + 9);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //R
    gotoxy(x1 + 46,y1 + 7);
    printf("%c%c%c%c%c",0xDB,0xDF,0xDF,0xFE,0xDC);
    gotoxy(x1 + 46,y1 + 8);
    printf("%c%c%c%c%c",0xDB,0xDC,0xDC,0xFE,0xDF);
    gotoxy(x1 + 46,y1 + 9);
    printf("%c %c%c%c",0xDB,0xDF,0xDB,0xDC);



    /*__Score__*/
    //S
    gotoxy(x1 + 5,y1 + 11);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xFE);
    gotoxy(x1 + 5,y1 + 12);
    printf("%c%c%c%c",0xDF,0xFE,0xFE,0xDC);
    gotoxy(x1 + 5,y1 + 13);
    printf("%c%c%c%c",0xFE,0xDC,0xDC,0xDF);
    //C
    gotoxy(x1 + 10,y1 + 11);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 10,y1 + 12);
    printf("%c",0xDB);
    gotoxy(x1 + 10,y1 + 13);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDF);
    //O
    gotoxy(x1 + 15,y1 + 11);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 15,y1 + 12);
    printf("%c  %c",0xDB,0xDB);
    gotoxy(x1 + 15,y1 + 13);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDF);
    //R
    gotoxy(x1 + 20,y1 + 11);
    printf("%c%c%c%c%c",0xDB,0xDF,0xDF,0xFE,0xDC);
    gotoxy(x1 + 20,y1 + 12);
    printf("%c%c%c%c%c",0xDB,0xDC,0xDC,0xFE,0xDF);
    gotoxy(x1 + 20,y1 + 13);
    printf("%c %c%c%c",0xDB,0xDF,0xDB,0xDC);
    //E
    gotoxy(x1 + 26,y1 + 11);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 26,y1 + 12);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 26,y1 + 13);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //:
    gotoxy(x1 + 31,y1 + 11);
    printf("%c",0xDC);
    gotoxy(x1 + 31,y1 + 13);
    printf("%c",0xDF);

}

void Title_make(int x1,int y1,int x2,int y2)
{
        /*__SPACE__*/
    //S
    gotoxy(x1 + 5,y1 - 6);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xFE);
    gotoxy(x1 + 5,y1 - 5);
    printf("%c%c%c%c",0xDF,0xFE,0xFE,0xDC);
    gotoxy(x1 + 5,y1 - 4);
    printf("%c%c%c%c",0xFE,0xDC,0xDC,0xDF);
    //P
    gotoxy(x1 + 10,y1 - 6);
    printf("%c%c%c%c%c",0xDB,0xDF,0xDF,0xFE,0xDC);
    gotoxy(x1 + 10,y1 - 5);
    printf("%c%c%c%c%c",0xDB,0xDC,0xDC,0xFE,0xDF);
    gotoxy(x1 + 10,y1 - 4);
    printf("%c",0xDB);
    //A
    gotoxy(x1 + 16,y1 - 6);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 16,y1 - 5);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDB);
    gotoxy(x1 + 16,y1 - 4);
    printf("%c  %c",0xDB,0xDB);
    //C
    gotoxy(x1 + 21,y1 - 6);
    printf("%c%c%c%c",0xDC,0xDF,0xDF,0xDC);
    gotoxy(x1 + 21,y1 - 5);
    printf("%c",0xDB);
    gotoxy(x1 + 21,y1 - 4);
    printf("%c%c%c%c",0xDF,0xDC,0xDC,0xDF);
    //E
    gotoxy(x1 + 26,y1 - 6);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 26,y1 - 5);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 26,y1 - 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);


}

void Level_title_make(int x1,int y1,int x2,int y2)
{
    /*__LEVEL__*/
    //L
    gotoxy(x1 + 5,y1 - 6);
    printf("%c",0xDB);
    gotoxy(x1 + 5,y1 - 5);
    printf("%c",0xDB);
    gotoxy(x1 + 5,y1 - 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //E
    gotoxy(x1 + 10,y1 - 6);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 10,y1 - 5);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 10,y1 - 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //V
    gotoxy(x1 + 15,y1 - 6);
    printf("%c   %c",0xDB,0xDB);
    gotoxy(x1 + 15,y1 - 5);
    printf(" %c %c",0xDB,0xDB);
    gotoxy(x1 + 15,y1 - 4);
    printf("  %c",0xDB);
    //E
    gotoxy(x1 + 21,y1 - 6);
    printf("%c%c%c%c",0xDB,0xDF,0xDF,0xDF);
    gotoxy(x1 + 21,y1 - 5);
    printf("%c%c%c%c",0xDB,0xFE,0xFE,0xFE);
    gotoxy(x1 + 21,y1 - 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //L
    gotoxy(x1 + 26,y1 - 6);
    printf("%c",0xDB);
    gotoxy(x1 + 26,y1 - 5);
    printf("%c",0xDB);
    gotoxy(x1 + 26,y1 - 4);
    printf("%c%c%c%c",0xDB,0xDC,0xDC,0xDC);
    //:
    gotoxy(x1 + 31,y1 -6);
    printf("%c",0xDC);
    gotoxy(x1 + 31,y1 - 4);
    printf("%c",0xDF);
}
/*
void Level_number_make(int x1,int y1,int x2,int y2,int level)
{
if()
{

}
if()
{

}
if()
{

}
if()
{

}
if()
{

}

}
*/











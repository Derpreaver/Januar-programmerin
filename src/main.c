#include "stm32f30x_conf.h"
#include "30010_io.h"
#include <string.h>

#define ESC 0x1B

void fgcolor(int foreground)
{
/*  Value      foreground     Value     foreground
    ------------------------------------------------
      0        Black            8       Dark Gray
      1        Red              9       Light Red
      2        Green           10       Light Green
      3        Brown           11       Yellow
      4        Blue            12       Light Blue
      5        Purple          13       Light Purple
      6        Cyan            14       Light Cyan
      7        Light Gray      15       White
*/
  int type = 22;             // normal text
	if (foreground > 7) {
	  type = 1;                // bold text
		foreground -= 8;
	}
  printf("%c[%d;%dm", ESC, type, foreground+30);
}

void bgcolor(int background)
{
/* IMPORTANT:   When you first use this function you cannot get back to true white background in HyperTerminal.
   Why is that? Because ANSI does not support true white background (ANSI white is gray to most human eyes).
                The designers of HyperTerminal, however, preferred black text on white background, which is why
                the colors are initially like that, but when the background color is first changed there is no
 	              way comming back.
   Hint:        Use resetbgcolor(); clrscr(); to force HyperTerminal into gray text on black background.

    Value      Color
    ------------------
      0        Black
      1        Red
      2        Green
      3        Brown
      4        Blue
      5        Purple
      6        Cyan
      7        Gray
*/
  printf("%c[%dm", ESC, background+40);
}

void color(int foreground, int background)
{
// combination of fgcolor() and bgcolor() - uses less bandwidth
  int type = 22;             // normal text
	if (foreground > 7) {
	  type = 1;                // bold text
		foreground -= 8;
	}
  printf("%c[%d;%d;%dm", ESC, type, foreground+30, background+40);
}

void resetbgcolor()
{
// gray on black text, no underline, no blink, no reverse
  printf("%c[m", ESC);
}

void clrscr()
{
    printf("%c[%d;%s",ESC,2,"J");
}

void clreol()
{
    printf("%c[%s",ESC,"k");
}

void gotoxy(int x,int y)
{
    printf("%c[%d;%dH",ESC,y,x);
}

void window(int x1,int y1,int x2, int y2,char title[])
{
    int sl = strlen(title);
    bgcolor(0);
    int h,b,i=1,j=1,k=1,l=1;
        h = y2 - y1; //antagelse om at y2 er størst
        b = x2 - x1; // antagelse om at x2 er størst

    gotoxy(x1,y1);
    printf("%c",0xDA);

    for(i=1;i<h;i++)
    {
        gotoxy(x1, y1 + i);
        printf("%c",0xB3);
    }

    gotoxy(x2,y1);
    printf("%c",0xBF);

    for(j=1;j<h;j++)
    {
        gotoxy(x2, y1 + j);
        printf("%c",0xB3);
    }

    gotoxy(x1,y2);
    printf("%c",0xC0);

    for(l=1;l<b;l++)
    {
        gotoxy(x1 + l, y1);
        printf("%c",0xC4);
    }

    gotoxy(x2,y2);
    printf("%c",0xD9);

    for(k=1;k<b;k++)
    {
        gotoxy(x1 + k, y2);
        printf("%c",0xC4);
    }


    gotoxy(x1+0.5*(x2-x1)-0.5*sl,y1);
    bgcolor(7);
    printf("%c[%cm",ESC,0x01);
    printf("%s",title);
    printf("%c[%cm",ESC,0x01);
}

void Terrain_Test_one(int x1,int y1,int x2, int y2)
{
    int tempx1,tempy1,tempx2,tempy2;
tempx1 = x1 + 1;
tempy1 = y1 + 1;
tempx2 = x2 - 1;
tempy2 = y2 - 1;
/*Line 1*/
gotoxy(tempx1,tempy1);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/* linje nr. 2 */
gotoxy(tempx1,tempy1+1);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB2);
printf("%c",0xB1);
printf("%c",0xDB);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB2);
printf("%c",0xB3);
printf("%c",0xDB);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.3*/
gotoxy(tempx1,tempy1+2);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.4*/
gotoxy(tempx1,tempy1 +3);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.5*/
gotoxy(tempx1,tempy1+4);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.6*/
gotoxy(tempx1,tempy1+5);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.7*/
gotoxy(tempx1,tempy1+6);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.8*/
gotoxy(tempx1,tempy1+7);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);

/*linje nr.9*/
gotoxy(tempx1,tempy1+8);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);

resetbgcolor(0);

/*linje nr.10*/
gotoxy(tempx1,tempy1+9);
color(7,7);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(12,4);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
printf("%c",0xB1);
color(10,2);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
printf("%c",0xB3);
color(9,2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
printf("%c",0xB2);
resetbgcolor(0);




resetbgcolor();

}





int main(void)
{
    uart_init( 9600 );
    int x1 = 25, y1 = 10, x2 = 100, y2 = 40;
    clrscr(0);
    window(x1,y1,x2,y2,"Level One");
    Terrain_Test_one(x1,y1,x2,y2);


    while(1)
    {  }
}

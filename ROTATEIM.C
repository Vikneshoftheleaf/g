#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void rot();
void main()
{
 int gd= DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 cleardevice();
 rot();
 getch();
}
void rot()
{
  int x1,x2,x3,x4,y1,y2,y3,y4;
  int x11,x22,x33,x44,y11,y22,y33,y44;
  int xr, yr, r;
  float t;
  cleardevice();
  settextstyle(7,0,5);
  settextjustify(1,1);
  outtextxy(320,20,"2D-ROTATION");
  gotoxy(1,5);
  printf("\n \t Enter the X1 & Y1 value L:");
  scanf("%d %d", &x1, &y1);
  printf("\n \t Enter the X2 & Y2 value L:");
  scanf("%d %d", &x2, &y2);
  printf("\n \t Enter the X3 & Y3 value L:");
  scanf("%d %d", &x3, &y3);
  printf("\n \t Enter the X4 & Y4 value L:");
  scanf("%d %d", &x4, &y4);
  cleardevice();
  settextstyle(7,0,5);
  settextjustify(1,1);
  outtextxy(320, 20, "2D-ROTATION");
  setlinestyle(1,1,1);
  line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x4,y4);
  line(x4,y4,x1,y1);
  setcolor(5);
  gotoxy(1,250);
  printf("\n \t Enter the reference point xr &gr:");
  scanf("%d %d",&xr, &yr);
  putpixel(xr,yr,5);
  printf("\n \t Enter the Angle:");
  scanf("%d", &r);
  t = r*3.14/180.0;
  x11 = floor(xr + (x1-xr) * cos(t) - (y1-yr) * sin(t));
  y11 = floor(yr + (x1-xr) * sin(t) + (y1-yr) * cos(t));
  x22 = floor(xr + (x2-xr) * cos(t) - (y2-yr) * sin(t));
  y22 = floor(yr + (x2-xr) * sin(t) + (y2-yr) * cos(t));
  x33 = floor(xr + (x3-xr) * cos(t) - (y3-yr) * sin(t));
  y33 = floor(yr + (x3-xr) * sin(t) + (y3-yr) * cos(t));
  x44 = floor(xr + (x4-xr) * cos(t) - (y4-yr) * sin(t));
  y44 = floor(yr + (x4-xr) * sin(t) + (y4-yr) * cos(t));
  setcolor(15);
  setlinestyle(0,1,1);
  line(x11,y11,x22,y22);
  line(x22,y22,x33,y33);
  line(x33,y33,x44,y44);
  line(x44,y44,x11,y11);
}



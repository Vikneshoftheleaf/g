#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
  float x,y,x1,y1,x2,y2,dx,dy,length;
  int i,gd,gm;
  clrscr();
  printf("\n Enter the Value of [x1, y1]:");
  scanf("%f %f",&x1,&y1);
  printf("\n Enter the Value of [x2, y2]:");
  scanf("%f %f",&x2,&y2);
  detectgraph(&gd, &gm);
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  dx=abs(x2-x1);
  dy=abs(y2-y1);

  if(dx >= dy) {
   length=dx;
  }
  else {
   length=dy;
  }
   dx=(x2-x1)/length;
   dy=(y2-y1)/length;
   x=x1+0.5;
   y=y1+0.5;
   i=1;
  while(i <= length)
  {
   putpixel(x,y,15);
   x=x+dx;
   y=y+dy;
   i=i+1;
  }
  getch();
  closegraph();
}
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

class drop
{
  int i;
  public:
   void display();
   void display1();
   void display2();
   void display3();
   void display4();
   void display5();
};
void drop::display()
{
  outtextxy(150,50, "Hai Welcome to my World");
}
void drop::display1()
{
  for(i=1;i<=300;i++)
  {
     outtextxy(150,50,"Hai Welcome to my World");
     outtextxy(200,20+i,"Hai");
     delay(10);
     cleardevice();
  }
}
void drop::display2()
{
  for(i=1;i<=280;i++)
  {
     outtextxy(150,20,"Hai Welcome to my World");
     outtextxy(200,320,"Hai");
     outtextxy(250,20+i,"Welcome");
     delay(10);
     cleardevice();
  }
}
void drop::display3()
{
  for(i=1;i<=240;i++)
  {
     outtextxy(150,20,"Hai Welcome to my World");
     outtextxy(200,320,"Hai");
     outtextxy(250,300,"Welcome");
     outtextxy(320,20+i,"to");
     delay(10);
     cleardevice();
  }
}

void drop::display4()
{
  for(i=1;i<=200;i++)
  {
     outtextxy(150,20,"Hai Welcome to my World");
     outtextxy(200,320,"Hai");
     outtextxy(250,300,"Welcome");
     outtextxy(320,280,"to");
     outtextxy(370,20+i,"my");
     delay(10);
     cleardevice();
  }
}

void drop::display5()
{
  for(i=1;i<=160;i++)
  {
     outtextxy(150,20,"Hai Welcome to my World");
     outtextxy(200,320,"Hai");
     outtextxy(250,300,"Welcome");
     outtextxy(320,280,"to");
     outtextxy(370,260,"my");
     outtextxy(420,20+i,"World");
     delay(10);
     cleardevice();
  }
}
void main()
{
  int gm,gd=DETECT;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  drop d;
  d.display();
  d.display1();
  d.display2();
  d.display3();
  d.display4();
  d.display5();
  outtextxy(150, 150, "Hai Welcome to my World");
  getch();
}
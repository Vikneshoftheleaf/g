#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem;
clrscr();
printf("\n Enter the Number:");
scanf("%d",&n);
rem=n%9;
if(n == 0)
{
printf("\n single digit result is 0");
}
else if(rem == 0)
{
printf("\n single digit result is 9");
}
else
{
printf("\n single digit result is %d", rem);
}
getch();
}
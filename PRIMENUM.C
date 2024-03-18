#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,y,n;
clrscr();
printf("Enter the number\n:");
scanf("%d", &n) ;
printf("The Prime Number are:\n",&n);
for(i=2;i<=n;i++)
{
y=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
y=1;
break;
}
}
if(y==0)
{
printf("%d\n",i);
}
}
getch();
}

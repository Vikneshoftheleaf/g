#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,total;
clrscr();
printf("\n mark in: \n\n");
printf("s1=");
scanf("%d",&s1);
printf("s2=");
scanf("%d",&s2);
printf("s3=");
scanf("%d",&s3);
printf("s4=");
scanf("%d",&s4);
printf("s5=");
scanf("%d",&s5);
total = s1+s2+s3+s4+s5;
if(s1<40||s2<40||s3<40||s3<40||s5<40)
{
printf("\n the result: FAIL");
}
else
{
printf("\n The result : PASS");
printf("\n The Percentage: %0.2f\n", total/5.0);
}
getch();
return 0;
}
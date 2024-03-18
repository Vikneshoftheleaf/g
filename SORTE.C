#include<stdio.h>
#include<conio.h>
void sort(int z,int array[]);
int a[10],b[10],c[20];
void main()
{
    int i,j,m,n,p;
    clrscr();
    printf("\n\t\t\t SORTING AND MEMBERING OF ARRAYS");
    printf("\n\t\t***************");
    printf("\n\t enter the size of first array:");
    scanf("%d",&m);
    printf("\n\t enter the array value:\t");
    for(i=1;i<=m;i++)
    scanf("%d",&a[i]);
    sort(m,a);
    printf("\n\t enter te size of second array:");
    scanf("%d",&n);
    printf("\n\t enter the array values:\t");
    for(i=1;i<=n;i++)
    scanf("%d",&b[i]);
    sort(n,b);
    p=m+n;
    for(i=1;i<=m;i++)
    c[i]=a[i];
    i=1;
    for(j=m+1;j<=p;j++)
    {
       c[j]=b[i];
       i++;
    }
    sort(p,c);
    printf("\n\n the merged sort list:\t");
    for(j=1;j<=p;j++)
    printf("%d\t",c[j]);
    getch();
    }
 void sort(int z,int array[])
{
     int i,j,t;
     for(i=1;i<z;i++)
     {
       for(j=i+1;j<=z;j++)
       {
	  if(array[i]>array[j])
	  {
	     t=array[i];
	     array[i]=array[j];
	     array[j]=t;
	   }
	}
      }
}


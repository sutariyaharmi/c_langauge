#include<stdio.h>
#include<conio.h>
void main()
{
 int i,sum=0;
 clrscr();
 for(i=1; i<=10;i++)
 {
 sum=sum+i;
 printf("%d",i);
 }
 printf("\nsum:%d",sum);
 getch();
 }
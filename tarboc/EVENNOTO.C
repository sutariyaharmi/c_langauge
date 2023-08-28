#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,sum=0;
 clrscr();
 printf("enter n");
 scanf("%d",&n);
 for(i=2;i<=n;i+=2)
 {
 sum=sum+i;
 printf("\t%d",i);
 }
 printf("\t\nsum:%d",sum);
 getch();
 }
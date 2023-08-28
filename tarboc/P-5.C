#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  for(i=2;i<=10;i+=2)
  {
   for(j=1;j<=5;j++)
   {
    printf("%d ",i);
   }
   printf("\n");
  }
  getch();
}
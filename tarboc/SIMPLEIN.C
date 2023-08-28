#include<stdio.h>
#include<conio.h>
void main()
{
  int p,r,t,i;
  clrscr();
  printf("p");
  scanf("%d",&p);
  printf("r");
  scanf("%d",&r);
  printf("t");
  scanf("%d",&t);
  i=p*(1+r*t);
  printf("product is %d",i);
  getch();
}
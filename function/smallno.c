#include<stdio.h>
int small()
{
  int a,b;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  if(a>b)
  printf("smallest no is:%d",b);
  else
  printf("small no is:%d",a); 
}
  int main()
  {
    small();
  }
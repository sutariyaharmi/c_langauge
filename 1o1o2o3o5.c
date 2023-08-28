#include<stdio.h>
void main()
{
  int i=1,a=1,b=1,c,n;
  printf("n");
  scanf("%d",&n);
  printf("%d %d ",a,b);
  do
  {
    c=a+b;
   printf("%d ",c);
    a=b;
    b=c;
    i++;
  }while(i<=n);
}
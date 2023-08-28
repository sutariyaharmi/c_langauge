#include<stdio.h>
int large()
{
  int a,b,c;
  printf("enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
   {
    if(a>c)
    printf("largest among:%d",a);
    else
    printf("large among:%d",c);
   }
   else
   {
     if(b>c)
    printf("larger among :%d",b);
     else
    printf("largest among :%d",c);
   }
 }
    int main()
   {
     large();
   }
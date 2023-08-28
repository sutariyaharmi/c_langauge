#include<stdio.h>
void main()
{
   float i=0.5,a=0.5,c,n;
   printf("n");
   scanf("%f",&n);
   printf("%f",a);
   do
   {
      a=a+i;
      printf("%f ",a);
      i++;
   }while(i<=n);
}
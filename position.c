#include<stdio.h>
void main()
{
  int total=0,sum=0,i,a[5];
  for(i=0;i<5;i++)
{
  printf("enter val a[%d]:",i);
  scanf("%d",&a[i]);
}
 for(i=0;i<5;i++)
 {
   if(i%2==0)
   sum=sum+a[i];

  else
   total=total+a[i];
 }
  printf("even total is%d",sum);
  printf("\nodd total is%d",total);
   
}
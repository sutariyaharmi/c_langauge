#include<stdio.h>
void main()
{
  int a[5],b[5],i;
  //int b[]={11,12,13,14,15,16,17};
  //int c[]={11,12,13,14,15,16,17};
  for(i=0;i<5;i++)
 {
  printf("enter val a[%d]:",i);
 scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
 {
   printf("enter val b[%d]:",i);
   scanf("%d",&b[i]);
 }
    printf("\na\tb\ttotal\n");
   for(i=0;i<5;i++)
  {
   printf("%d \t%d\t%d\n",a[i],b[i],a[i]+b[i]);
 }
}
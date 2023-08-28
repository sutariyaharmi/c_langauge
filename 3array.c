#include<stdio.h>
void main()
{
  int b[]={11,12,13,14,15,16,17},i;
  int c[]={11,12,13,14,15,16,17};
  printf("\nb\tc\ttotal\n");
  for(i=0;i<7;i++)
{
  printf("%d\t%d\t%d\n",b[i],c[i],b[i]+c[i]);
}
}
#include<stdio.h>
int fb(int a)
{
  if(a==0)

  return 0;
 
else if(a==1)

   return 1;

 else
  return(fb(a-1)+fb(a-2));
 
}

 void main()
{
  int i,n;
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    printf("%d ",fb(i));
  } 
}
#include<stdio.h>
void perfect()
{
  int i=1,sum=0,n;
  printf("enter number");
  scanf("%d",&n);

  while(i<n)
  {
    if(n%i==0)
    sum=sum+i;
    i++;
  }
     if(sum==n)
  printf("%d is perfect no.",n);
   
    else
  printf("%d is not perfect no.",n);
}

  int main()
   {
      perfect();
   }
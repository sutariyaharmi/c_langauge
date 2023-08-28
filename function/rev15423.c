#include<stdio.h>
void main()
{
    int amt,a,rev=0;
    printf("enter amt:");
    scanf("%d",&amt);
    while(amt !=0)
     {
       a=amt%10;
       rev=rev*10+a;
       amt/=10; 
     }
      printf("reverse number is:%d",rev);
    }
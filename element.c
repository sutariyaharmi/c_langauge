#include<stdio.h>
void main()
{
 int total=0,sum=0,i,a[5];
 for(i=0;i<5;i++)
{
 printf("enter val a[i]:",i);
 scanf("%d",&a[i]);
}
 for(i=0;i<5;i++)
{
 printf("%d\n",a[i]);
 if(a[i]%2==0)
	 sum=sum+a[i];
 
else
   total=total+a[i];
}
  printf("evenno sum is:%d",sum);
  printf("\n oddno sum is:%d",total);
  printf("\n alltotal:%d",total+sum);
}
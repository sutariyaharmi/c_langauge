#include<stdio.h>
void main()
{
  int a[5][5],i,j,sum=0,total=0,sum1=0;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("enter val a[%d][%d]",i,j);
       scanf("%d",&a[i][j]);
     }
   }
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
      {
        printf("%d",a[i][j]);   
      }
        printf("\n");
     }
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       if(a[i]==a[j])
       sum=sum+a[i][j];

       if(a[i]<a[j])
       sum1=sum1+a[i][j];

       if(a[i]>a[j])
       total=total+a[i][j];  
     }
   }
     printf("\ntotal of diagonal:%d",sum);
     printf("\n total of uppar triangle :%d",sum1);
     printf("\n total of lower triangle:%d",total);
}
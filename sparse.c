#include<stdio.h>
void main()
{
   int a[5][5],i,j;
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
        if(a[i][j]%2==0)
          printf(" ");

        else
        
        printf("%d ",a[i][j]);
        printf(" ");
      } 
       printf("\n");
    } 
}
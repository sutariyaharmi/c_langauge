#include<stdio.h>
void main()
{
  int a[5][5],b[5][5],i,j;
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
     printf("enter val b[%d][%d]",i,j);
     scanf("%d",&b[i][j]);
   }
 }
   printf("\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {  
    printf("%d",a[i][j]);
   }
   printf("\t");
          for(j=0;j<3;j++)
   {
    printf("%d",b[i][j]);
}
  printf("\t");
     for(j=0;j<3;j++)
 {
   printf("%d ",a[i][j]+b[i][j]);
 }
   printf("\n");
}
}
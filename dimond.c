#include<stdio.h>
int main()
{
    int i,j,sp=20;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*  ");
        }
          sp--;
        printf("\n");
    } 
      sp++;
      for(i=5;i>=1;i--)
      {
        for(j=1;j<=sp;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*  ");
        }
         sp++;
         printf("\n");
      }
}
     
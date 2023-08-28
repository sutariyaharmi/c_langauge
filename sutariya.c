#include<stdio.h>
int main()
{
  char str[20];
  printf("enter string:");
  gets(str);
 
 //printf("your string is:%s",str);
  for(int i=0;str[i]!='\0';i++)
   {
     for(int j=0;j<=i;j++)
     {
       printf("%c",str[j]);
     }
      printf("\n");
   }
}

  
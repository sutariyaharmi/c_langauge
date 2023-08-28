#include<stdio.h>
void main()
{
   int i,j;
   char str[20];
   printf("str:");
   gets(str);
   j=0;
while(str[j]!='\0')
  {
   j++;
  }
   i=j-1;
   while(i>=0)
   {
    printf("%c",str[i]);
    i--; 
   } 
    i=0;
    while(str[i]!='\0')
    {
       i++;
    }
     printf("\nstring length is:%d",i);
}

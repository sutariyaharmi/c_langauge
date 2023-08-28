#include<stdio.h>
int main()
{
  char str[20];
  printf("enter string:");
  gets(str);
  
  printf("your string is:%s",str); 
  char i=0;
  for(i=0; str[i];i++)
  printf("string in reverse order:"); 
  for(i=i;i>=0;i--)
 
  printf("%c",str[i]); 
}  
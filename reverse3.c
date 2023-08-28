#include<stdio.h>
#include<string.h>
void main()
{
  char str[20];
  printf("str:");
  gets(str);
  strrev(str);

  printf("\nreverse is:%s",str);
}
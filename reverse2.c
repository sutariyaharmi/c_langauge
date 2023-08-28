#include<stdio.h>
int main()
{
  char s1[20],s2[20];
  int i,j,k;
  printf("enter string:");
  gets(s1);
 
  // reverse string
  for(i=0;s1[i]!='\0';i++);
  k=i;
  for(j=0;j<i;j++)
  {
    s2[j]=s1[--k];
 } 
    s2[j]='\0';
    printf("\nstring in reverse order:%s",s2);
}
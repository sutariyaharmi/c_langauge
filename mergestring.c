#include<stdio.h>
void main()
{
  char str1[20],str2[20],str3[20];
  int i=0,j=0;

  printf("str1:");
  gets(str1);
  printf("str2:");
  gets(str2);

  while(str1[i]!='\0')
  {
    str3[j]=str1[i];
    i++;
    j++;
  }
    i=0;
    while(str2[i]!='\0')
  {
     str3[j]=str2[i];
     i++;
     j++;
  }
   str3[j]='\0';
   printf("\nmerge string is:%s",str3);  
}
  
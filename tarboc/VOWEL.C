// vowel or cosonant.
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("enter char:");
 scanf("%c",&ch);
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
 printf("%c is vowel:",ch);
}
 else
 {
 printf("%c is cosonant:",ch);
 }
 getch();
 }
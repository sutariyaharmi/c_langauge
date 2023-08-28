#include<stdio.h>
int vote()
{
 int age;
 printf("enter age:");
 scanf("%d",&age);
 if(age>=18)
 printf("voting:%d",age);
 else
 printf("not for voting:%d",age); 
}
 
 int main()
{
  vote();
} 
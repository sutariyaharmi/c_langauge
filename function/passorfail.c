#include<stdio.h>
int student()
{
  int marks;
  printf("marks:");
  scanf("%d",&marks);
  if(marks>=35)
  printf("pass:%d",marks);
  else
  printf("fail:%d",marks);
}
  int main()
  {
    student();
  }
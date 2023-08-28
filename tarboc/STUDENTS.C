  // find out students marks wheather pass or not.
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
  int marks;
  clrscr();
  printf("enter marks:");
  scanf("%d",&marks);
  if(marks>=35)
  {
    printf("pass :%d ",marks);
    }
    else
    {
     printf("fail:%d",marks);
     }
     getch();
   }
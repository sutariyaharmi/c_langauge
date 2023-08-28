  // find out its leap year or not.
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
    int a;
    clrscr();
    printf("enter a:");
    scanf("%d",&a);
    if(a%4==0)
    {
     printf("leap year:%d ",a);
     }
   else
    {
    printf("no leap year: %d",a);
    }
    getch();
    }


#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n,i;
  clrscr();
  printf("n");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
   if(a%2==0)

    printf ("\t%d",a*a);

    else

    printf("\t%d",a);
    }
    getch();


}
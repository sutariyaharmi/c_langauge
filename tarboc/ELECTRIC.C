  #include<stdio.h>
  #include<conio.h>
  void main()
  {
   float  unit,bill,total;
   clrscr();
   printf("enter unit:");
   scanf("%f",&unit);
   if(unit<=100)
   {bill=50+unit*0.60;}
   else if(unit<=300)
   {bill=50+60+(unit-100)*0.8;}
   else if(unit>=300)
   {bill=50+60+160+(unit-300)*0.9;}
    if(bill>300)
   {total=bill+bill*0.15;
   printf("bill:%f",total);
   }
   else
   {printf("bill:%f",bill);
   }
   getch();
   }

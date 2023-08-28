   #include<stdio.h>
   #include<conio.h>

   void main()
   {
   float salary,hra,da,gross;
   clrscr();
   printf("enter salary:");
   scanf("%f",&salary);
   if(salary<=5000)
   { hra=salary*0.8;
     da=salary*0.20;}
     else if(salary<=10000)
     { hra=salary*0.12;
       da=salary*0.30;}
     else if(salary<=15000)
     { hra=salary*0.15;
       da=salary*0.40;}
     else if(15000<salary)
     { hra=salary*0.20;
       da=salary*0.50;}
      gross= salary+hra+da;
      printf("salary:%f",gross);
      getch();
      }









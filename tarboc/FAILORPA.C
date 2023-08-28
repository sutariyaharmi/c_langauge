  #include<stdio.h>
  #include<conio.h>

  void main()
  {
  float persentage ,total,maths,eng,sci;
  clrscr();
  printf("enter maths,sci,eng:");
  scanf("%f%f%f",&maths,&sci,&eng);
  if(maths<35 || sci<35 || eng<35)
  {
	printf("you are Fail....");
  }
  else{
  total=maths+sci+eng;
  printf("total is:%f",total);
  persentage=total/300*100;
  printf("persentage is :%f",persentage);
    if(persentage>=75)
    {printf("A:");}
    else if(persentage>=60)
    {printf("B");}
    else if(persentage>=45)
    {printf("C");}
    else if(persentage>=35)
    {printf("D");}
    }
   getch();
   }



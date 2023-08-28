#include<stdio.h>
void main()
{
  int i, eng[5],sci[5],maths[5],total;
  float pr;
   for(i=0;i<5;i++)
    { 
   	printf("enter val eng[%d]:",i);
   	scanf("%d",&eng[i]);
   }
  printf("\n");
 for(i=0;i<5;i++)
   {
   	printf("enter val sci[%d]:",i);
   	scanf("%d",&sci[i]);
  }
  printf("\n");
 for(i=0;i<5;i++)
   {
   	printf("enter val maths[%d]:",i);
   	scanf("%d",&maths[i]);
    }
  printf("\neng\tsci\tmaths\ttotal\tpr\tgrade\n");
  for(i=0;i<5;i++)
{
 	total=eng[i]+sci[i]+maths[i];
  	pr=total/3;
 	printf("%d\t%d\t%d\t%d\t%.2f\t",eng[i],sci[i],maths[i],total,pr);

    if(eng[i]<35 || sci[i]<35 || maths[i]<35)
  {
    printf("fail....");
  }
   else if(pr>=75)
{
  printf("A:");
}
  else if(pr>=60)
{
  printf("B:");
}
   else if(pr>=45)
{
  printf(" C:");
}
  printf("\n");
}
}
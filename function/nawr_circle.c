#include<stdio.h>
float circle()
{
  float a,pi=3.14,r;
  printf("enter r");
  scanf("%f",&r);
  a=pi*r*r;
  return a;  
}
  float main()
  {
    float x;
    x=circle();
    printf("circle is:%f",x);
  }
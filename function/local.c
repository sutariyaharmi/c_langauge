#include<stdio.h>
void dis(int m,int s,int e,int t,float per)
{
   printf("maths marks:%d\n",m);
   printf("science marks:%d\n",s);
   printf("english marks:%d\n",e);
   printf("total marks:%d\n",t);
   printf("persentage :%.2f\n",per);
 }

 void clac(int m,int s,int e)
 {
   int t;
   float per; 
   t=m+s+e;
   per=(float)t/3;
   dis(m,s,e,t,per);
 }
  
  void setdata()
{

  int m,s,e;
  printf("enter maths marks:");
  scanf("%d",&m); 
  printf("enter science marks:");
  scanf("%d",&s); 
  printf("enter english marks:");
  scanf("%d",&e); 
  clac(m,s,e);
}

 int main()
{
   setdata();
}
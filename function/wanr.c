#include<stdio.h>
int product(int a,int b){
	int t;
	t=a*b;
	printf("product of a and b is:%d",t);
}
int main()
{
  //product (2,5);
  int x,y;
  printf("enter x and y:");
  scanf("%d%d",&x,&y);
  product(x,y);
}
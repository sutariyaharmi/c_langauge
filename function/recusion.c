#include<stdio.h>
int fun(int n){
 printf("widding phase: %d\n",n);
 if(n<3){
   fun(++n);
 }
 printf("unwidding phase:%d\n",n);
}
 int main(){
  fun(1);
}
/*
  n=1 => wp1  uwp2
  n=2 => wp2  uwp3
  n=3 => wp3  uwp3
*/
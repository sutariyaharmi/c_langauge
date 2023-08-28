//pointer(refrence variable)-> stare to address of another variable as data.
#include<stdio.h>
int main()
{
    int a=50, *p ,**q;
    p =&a;
    q =&p;
    printf("value of a is:%d\n",a);
    printf("address of a is:%d\n",&a);
    printf("address of usine p is:%d\n",p);
    printf("address of p is:%d\n",&p);
    printf("value of using p is:%d\n",*p);
    printf("address of p using q is:%d\n",q);
    printf("address of q is:%d\n",&q);
    printf("value of using q is:%d\n",**q);

    } 
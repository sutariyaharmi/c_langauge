//structure -> clooection of variable diffrent data types.
#include<stdio.h>
struct student{
   int roll;
   char name[20];
   int m,s,e,t;
   float per;
};
int main()
{
   struct student a[5];
   int i;
   for(i=0;i<2;i++){
       printf("****************************************\n");
       printf("enter roll no:");
       scanf("%d",&a[i].roll);
        printf("enter name:");
       scanf("%s",&a[i].name);
        printf("enter sci:");
       scanf("%d",&a[i].s);
        printf("enter maths:");
       scanf("%d",&a[i].m);
         printf("enter english:");
       scanf("%d",&a[i].e);
       printf("\n");
   }  
    printf("roll\tname\tmaths\tsci\teng\ttotal\tpersentage");
    printf("\n=======================================================");
    for(i=0;i<2;i++){
        a[i].t= a[i].m + a[i].s + a[i].e;
        a[i].per = (float)a[i].t/3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].roll,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);

    } 

}
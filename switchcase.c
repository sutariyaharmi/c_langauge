 // switch case

 #include<stdio.h>
 int main()
 {
    int a=20 ,b=5 , ch;
    printf("1. addition\n");
    printf("2. substrction\n");
    printf("3. multiplication\n");
    printf("4. divisible\n");
    printf("enter your choice:");
    scanf("%d",&ch);

    switch(ch){
         case 1:
          printf("addition of a and b is:%d\n",a+b);
          break;
         case 2:
          printf("substrction of a and b is:%d\n",a-b);
          break;
          case 3:
          printf("multiplication of a and b is:%d\n",a*b);
          break;
          case 4:
          printf("divisible of a and b is:%d\n",a/b);
          break;
          default:
            printf("wrong choice.......");
            break;
    }
 }
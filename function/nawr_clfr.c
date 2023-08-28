#include<stdio.h>
float fr()
{
  float cel ,fer;
  printf("cel");
  scanf("%f",&cel);
  fer=(cel*9)/5+32;
  return fer;

}
  float main()
  {
   float x;
   x=fr();
   printf("cel to fer:%f\n\n",x); 
  }
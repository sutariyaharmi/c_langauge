#include<stdio.h>
 float ebill()
{
  float unit,bill,total;
  printf("enter unit");
  scanf("%f",&unit);
  if(unit<=100)
  {bill=50+unit*o.60;}
  else if(unit<=300)
  {bill=50+60+(unit-100)*0.80;}
  else if(unit>300)
  {bill=50+60+160+(unit-300)*0.9;}
 	 if(bill>300){
  	total=bill+bill*0.15;
        return total;
       }
  else{
  total=bill;
  return total;}
 
}
  float main()
{
  float x;
  x=ebill();
  printf("bill is:%f\n\n",x);

}
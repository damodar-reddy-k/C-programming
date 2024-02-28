/*
Task : To print b^p 
Written by : Damodar Reedy K
As part of While loop Exercise.
*/
#include<stdio.h>
#include<math.h>
void main()
{
   double  b, p, d, v ;
   printf("\n Enter the base & power(b,p): ");
   scanf("%lf,%lf",&b,&p) ;
 
   d = 1 ;
   v = 1 ;
   while(d <= p)
        {
	 v = v*b ;
	 d = d+1 ;
        }
   printf("\n The value of b^p is %lf\n", v) ;
   printf("\n") ;
}

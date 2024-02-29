//To check if a number is prime
#include<stdio.h>
void main()
{
int a, b=2, c=0 ;
printf("\n Enter a number to check if its a prime :");
scanf("%d", &a);
while(b<=a/2)
     { if (a%b == 0)
      { c= 1;
      break;}
      else 
      b+=1;
     }
if (c==0 && a != 1)
printf("\n %d is a prime number\n",a);
else
printf("\n %d is not a prime number\n",a);
}



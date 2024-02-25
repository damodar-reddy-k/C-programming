/*This program prints the gcd of 2 numbers*/

#include<stdio.h>
int main(){
int a,b,c;
printf("\nEnter 2 numbers(a,b) to find their gcd:");
scanf("%d,%d",&a,&b);
if(a<=b)
	c=a;
else
	c=b;
while((a%c!=0 || b%c!=0) && c>1)
	c=c-1;
printf("\nThe gcd of 2 numbers is %d\n",c);
return 0;}

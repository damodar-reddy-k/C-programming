/*This program prints the factorial given a number*/
#include<stdio.h>
int main(){
int a,n,b;
printf("\nEnter a number to print its factorial : ");
scanf("%d",&a);
n=1;b=1;
while(n<=a){
	b=b*n;
	n=n+1;}
printf("\nThe factorial of the number %d is %d.\n",a,b);
return 0;}

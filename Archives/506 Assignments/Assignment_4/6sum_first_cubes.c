/*This program prints the sum of cubes of first n natural numbers given a number*/
#include<stdio.h>
int main(){
int a,b,n,i;
printf("\n\nEnter a number to find the sum of cubes of frst n natural numbers:");
scanf("%d",&a);
n=0;
i=1;
while(i<=a){
	n=n+(i*i*i);
	i+=1;}
printf("\nThe sum of cubes of first %d natural numbers is %d\n\n",a,n);
return 0;}

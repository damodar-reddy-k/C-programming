/*This program finds the sum of series 0/1+1/2+2/3+3/4+4/5+.....+n/n+1*/
#include<stdio.h>
int main()
	{
	float a,b,i,n;
	printf("\n\nEnter the number to find the sum of series(0/1+1/2+2/3+3/4+4/5+.....+n/n+1) :");
	scanf("%f",&a);
	n=0;b=0;i=1;
	while(b<=a){
		n=n+(b/i);
		b++;
		i++;}
	printf("\nThe sum is %lf\n",n);
	return 0;
	}

/*This program reverses a 5 digit number*/
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("\nEnter a 5 digit Number:");
	scanf("%d",&a);
	b=a%10;
	a=(a-b)/10;
	c=a%10;
	a=(a-c)/10;
	d=a%10;
	a=(a-d)/10;
	e=a%10;
	a=(a-e)/10;
	f=a+e*10+d*100+c*1000+b*10000;
	printf("\nThe 5 digit number reversed is %d \n",f);
	return 0;
}

/*This program swaps 2 given numbers and prints them*/
#include<stdio.h>
int main()
{	void swap(int *a,int *b)
	{	
		int c;
		c=*a;
		*a=*b;
		*b=c;
	}
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d,%d",&a,&b);
	printf("\nThe 2 numbers before swapping are %d,%d",a,b);
	swap(&a,&b);
	printf("\nThe 2 numbers after swapping are %d,%d\n",a,b);
	return 0;
}

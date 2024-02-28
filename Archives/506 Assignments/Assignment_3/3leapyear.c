/*This program checks if a given year is leap year or not */ 
#include <stdio.h>
int main()
{	int a;
	printf("\nEnter a year to check if the given year is leap year or not :");
	scanf("%d",&a);
	if(a%400 == 0)
		printf("\nThe given year is leap year\n");
	else if(a%100==0)
		printf("\nThe given year is not a leap year\n");
	else if(a%4==0)
		printf("\nThe given year is a leap year\n");
	else 
		printf("\nThe given year is not a leap year\n");
	return 0;
}

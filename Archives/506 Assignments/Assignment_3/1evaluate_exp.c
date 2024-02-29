#include<stdio.h>
#include<math.h>
int main()
{
	double A, B ;
	const double g=9.8;
	printf("\nEnter a real number:");
	scanf("%lf",&A);
        B =  2 * M_PI * (log(sqrt(1/9.8)))*(1/4 * pow(sin(A/2),3) + exp(1.32)); 
	printf("\n%lf\n\n",B);
	return 0; 
}

/*This program prints the pascals triangle of n rows given n */
#include<stdio.h>
int main()
{	int factorial(int n)
	{	int b,i;
		for(b=1,i=1;i<=n;i++)
			b=b*i;
		return b;
	}

	int combination(int c,int r)
	{	int x,y,z,w;
		x=factorial(c);
		y=factorial(r);
		z=factorial(c-r);
		w=x/(y*z);
		return w;
	}

	int a,d,i,c;
	printf("\nEnter the number of rows of the pascals triangle to be printed:");
	scanf("%d",&d);
	
	for(a=0;a<d;a++)
	{	printf("\n");
		
		for(i=0;i<=a;i++)
		{	c = combination(a,i);
			printf("%d\t",c);
		}
	}
	
	return 0;
}

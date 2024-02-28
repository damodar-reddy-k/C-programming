/*This program determines the binary equivalent of a given decimal number*/
#include<stdio.h>
#include<math.h>
int main()
{	int dtob(int p)
	{	int q,r,i;
		i=0;
		r=0;
		q=p;
		while (q!= 0)
		{	p=p%2;
			r=r+(p*pow(10,i));
			q=q/2;
			p=q;
			i++;
		}
		return r;
	}

	int w,n;
	printf("\nEnter any number to convert it into decimal number :");
	scanf("%d",&n);
	w = dtob(n);
	printf("\n The binary equivalent of the given number is %d\n",w);
	return 0;
}

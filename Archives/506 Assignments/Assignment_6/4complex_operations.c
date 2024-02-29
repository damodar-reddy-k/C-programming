/*This program adds subracts multiplies divides given two complex numbers */
#include<stdio.h>
#include<math.h>
int main()
{	void cadd(float p, float q,float r, float s)
	{	float a,b;
		a=p+q;
		b=r+s;
		printf("%f + i(%f)\n",a,b);
	}
	void csub(float p, float q,float r, float s)
	{	float a,b;
		a=p-q;
		b=r-s;
		printf("%f + i(%f)\n",a,b);
	}
	void cmlt(float p, float q,float r, float s)
	{	float a,b;
		a=(p*q)-(r*s);
		b=(p*s)+(r*q);
		printf("%f + i(%f)\n",a,b);
	}
	void cdiv(float p, float q,float r, float s)
	{	float a,b;
		a=((p*q)/(pow(q,2)+pow(s,2)))+((r*s)/(pow(q,2)+pow(s,2)));
		b=((r*q)/(pow(q,2)+pow(s,2)))-((p*s)/(pow(q,2)+pow(s,2)));
		printf("%f + i(%f)\n",a,b);
	}
	printf("Enter	a for addition\n\ts for subraction\n\tm for multiplication\n\td for division\n");
	char a;
	float m,n,h,i;
	scanf("%c",&a);
	printf("\nEnter the real and imaginary parts separately\n");
	printf("\nEnter complex number 1 : ");
	scanf("%f,%f",&m,&n);
	printf("\nEnter complex number 2 : ");
	scanf("%f,%f",&h,&i);

	switch(a)
	{	case 'a':
			cadd(m,h,n,i);
			break;
		case 's':
			csub(m,h,n,i);
			break;
		case 'm':
			cmlt(m,h,n,i);
			break;
		case 'd':
			cdiv(m,h,n,i);
			break;
		default:
			printf("\n Entered the wrong character");
	}
	return 0;
}

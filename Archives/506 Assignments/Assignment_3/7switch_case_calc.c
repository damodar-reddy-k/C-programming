/*This program is a calculator made using switch case
*/
#include<math.h>
#include<stdio.h>
int main()
{       
	char x;
	double u,v,w;
	
	   printf("Press the character aassigned to the action \n'+' for addition\n'-' for subraction\n'*' for multiplication\n'/' for division\n't' for tan\n'c' for cos\n's' for sin\n'p' for power\n'm' for max\n'n' for min\n'a' for avg");
	   printf("\nEnter a character:");
	   x=getchar();
	   switch(x)
	       {	
		case '+':
			{printf("\n\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=u+v;
			printf("\nThe sum of 2 numbers is%lf",w);
			break;}
		case '-':
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=u-v;
			printf("\nThe difference of 2 numbers is%lf",w);
			break;}
		case '*':
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=u*v;
			printf("\nThe multiplied value of 2 numbers is%lf",w);
			break;}
		case '/':
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=u/v;
			printf("\nThe multiplied value of 2 numbers is%lf",w);
			break;}
		case 't' :
			{printf("\nEnter a number:");
			scanf("%lf",&u);
			w=tan(u);
			printf("\ntan(x) is%lf",w);
			break;}
		case 's' :
			{printf("\nEnter a number:");
			scanf("%lf",&u);
			w=sin(u);
			printf("\nsin(x) is%lf",w);
			break;}
		case 'c' :
			{printf("\nEnter a number:");
			scanf("%lf",&u);
			w=cos(u);
			printf("\ncos(x) is%lf",w);
			break;}
		case 'm' :
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=fmax(u,v);
			printf("\nThe maximum value of 2 numbers is%lf",w);
			break;}
		case 'n' :
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=fmin(u,v);
			printf("\nThe minimum value of 2 numbers is%lf",w);
			break;}
		case 'a':
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=(u+v)/2;
			printf("\nThe average value of 2 numbers is%lf",w);
			break;}
		case 'p':
			{printf("\nEnter 2 numbers:");
			scanf("%lf,%lf",&u,&v);
			w=pow(u,v);
			printf("\na to the power b is%lf",w);
			break;}
		default :
			{printf("\nEnter a correct charecter\n");}
			
			}
		}
		

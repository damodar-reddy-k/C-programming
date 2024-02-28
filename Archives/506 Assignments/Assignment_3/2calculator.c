/*this program performs the operations of a calculator
*/
#include<stdio.h>
#include<math.h>
int main()
{
//int power = 1;
char x;
double u,v,w;
//while(power ==1){
printf("\nEnter the character aassigned to perform the operation\n'+' for addition\n'-' for subraction\n'*' for multiplication\n'/' for division\n't' for tan\n'c' for cos\n's' for sin\n'p' for power\n'm' for max\n'n' for min\n'a' for avg");
printf("\nEnter a character:");
scanf("%c", &x);
//power =0;
if (x == '+'){
	printf("\nEnter 2 numbers(a,b):");
	scanf("%lf,%lf",&u,&v);
	w=u+v;
	printf("\nThe sum of 2 numbers is%lf",w);}
else if (x == '-'){
	printf("\nEnter 2 numbers(a,b):");
	scanf("%lf,%lf",&u,&v);
	w=u-v;
	printf("\nThe difference of 2 numbers is%lf",w);}
else if (x == '*'){
	printf("\nEnter 2 numbers(a,b):");
	scanf("%lf,%lf",&u,&v);
	w=u*v;
	printf("\nThe multiplied value of 2 numbers is%lf",w);}
else if (x == '/'){
	printf("\nEnter 2 numbers(a,b):");
	scanf("%lf,%lf",&u,&v);
	w=u/v;
	printf("\nThe multiplied value of 2 numbers is%lf",w);}
else if (x == 't'){
	printf("\nEnter a number:");
	scanf("%lf",&u);
	w=tan(u);
	printf("\ntan(x) is%lf",w);}
else if (x == 's'){
	printf("\nEnter a number:");
	scanf("%lf",&u);
	w=sin(u);
	printf("\nsin(x) is%lf",w);}
else if (x == 'c'){
	printf("\nEnter a number:");
	scanf("%lf",&u);
	w=cos(u);
	printf("\ncos(x) is%lf",w);}
else if (x == 'm'){
	printf("\nEnter 2 numbers:");
	scanf("%lf,%lf",&u,&v);
	w=fmax(u,v);
	printf("\nThe maximum value of 2 numbers is%lf",w);}
else if (x == 'n'){
	printf("\nEnter 2 numbers:");
	scanf("%lf,%lf",&u,&v);
	w=fmin(u,v);
	printf("\nThe minimum value of 2 numbers is%lf",w);}
else if (x == 'a'){
	printf("\nEnter 2 numbers:");
	scanf("%lf,%lf",&u,&v);
	w=(u+v)/2;
	printf("\nThe average value of 2 numbers is%lf",w);}
//printf("how is it travelling all the way to here");
else if (x == 'p'){
	printf("\nEnter 2 numbers:");
	scanf("%lf,%lf",&u,&v);
	w=pow(u,v);
	printf("\na to the power b is%lf",w);}
	
//printf("\n Enter 0 to quit program or 1 to continue :");
//scanf("%d", &power);  
//}
return 0;
}

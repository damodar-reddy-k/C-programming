/*this program checks if the input chraceter is uppercase,lowercase,digit or special character
*/
#include<math.h>
#include<stdio.h>
int main()
{
	char a;
	printf("\nEnter any character:");
	a=getchar();
	if(a>=65&&a<=90)
		printf("\nUPPERCASE\n");
	else if(a>=97&&a<=112)
		printf("\nlowercase\n");
	else if(a<=57&&a>=48)
		printf("\ndigit\n");
	else
		printf("\nSpecial Character\n");
	return 0;
}

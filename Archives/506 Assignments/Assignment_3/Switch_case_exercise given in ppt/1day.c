/*
Task : To Print the day of the week
Written by : Damodar Reedy K
As part of Switch Case Exercise 
*/
#include<stdio.h>
void main()
{
	char A ;
	printf("\n Enter the first letter of the week day. all letters in case sensitive exception, capitals for sunday and thursday : ");
	scanf("%c",&A);
	{ 
		switch(A)
		{
	        	case 'm' : printf("\n monday");break;
			case 't' : printf("\ntuesday");break;
	        	case 'w' : printf("\nwednesday");break;
	        	case 'T' : printf("\nThursday");break;
	        	case 'f' : printf("\nfriday");break;
	        	case 's' : printf("\nsaturday");break;
		        case 'S' : printf("\nSunday");break;
		}
	printf("\n");
	}
}

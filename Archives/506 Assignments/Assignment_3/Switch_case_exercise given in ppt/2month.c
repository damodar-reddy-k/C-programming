/*
Task : To Print number of days in a month
Written by : Damodar Reedy K
As part of Switch Case Exercise 
*/
#include<stdio.h>
   void main()
{
  int  M ;
    printf("\n Enter the month number to know the total number of days in that month\n Enter 0 for january and so on.. until 11 for december): ");
    scanf("%d", &M);
         {      printf("\n");
           switch(M)
	   { 
	    case 10: printf("30 days"); break;
	    case 8: printf("30 days"); break;
	    case 5: printf("30 days"); break;
	    case 3: printf("30 days"); break;
	    case 1: printf("28 days"); break;
	    
	    default : printf("31 days");
	    }
        	printf("\n");
	 }
}

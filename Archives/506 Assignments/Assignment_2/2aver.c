//to take martks of 5 subjects and print average of them.
#include<stdio.h>
int main()
{  int S1, S2, S3, S4, S5 ;
   float A1 ;
	   
	printf("\nenter of marks of subject 1:");
	scanf("%d",&S1);
	printf("\nenter of marks of subject 2:");
         scanf("%d",&S2);
	printf("\nenter of marks of subject 3:");
         scanf("%d",&S3);
	printf("\nenter of marks of subject 4:");
         scanf("%d",&S4);
	printf("\nenter of marks of subject 5:");
         scanf("%d",&S5);
	 A1 = (S1+S2+S3+S4+S5)/5;
		 printf("\nthe average mark of 5 subjects is %f \n", A1);
	 return 0;
}




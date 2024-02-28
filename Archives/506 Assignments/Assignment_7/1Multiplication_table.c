/* Use arrays and print a multiplication Table*/
#include<stdio.h>
void main()
{   int a,b,i ;
    printf("\n Enter an integer to get its multiplication table:");
    scanf("%d", &a);
    int multip[10] = {0};// Building an Array and printing Multiplication Table
    multip[0]=a;
    printf("\n\t\t\t\t\t\t\t%d * %d = %d",a,1,a);
    for(i=0,b=2;i<9;i++,b++)
       {multip[i+1] = multip[i]+a;
        printf("\n\t\t\t\t\t\t\t%d * %d = %d",a,b,multip[i+1]);
       }
       printf("\n");
}


/*This program prints the sum of digits in 3 digit number*/
#include<stdio.h>
int main()
{
        int a,b,c,d;
        printf("\nEnter a 3 digit number:");
        scanf("%d",&a);
        b=a%10;
        a=a-b;
        a=a/10;
        c=a%10;
        a=a-c;
        a=a/10;
        d=a+b+c;
        printf("\nThe sum of digits of a 3 digit number is %d",d);
        printf("\n\n");
        return 0;
}

/*this program swaps 2 numbers
*/
#include<stdio.h>
int main()
{
        int x,y,z;
        printf("\nEnter number1:");
        scanf("%d",&x);
        printf("\nEnter number2:");
        scanf("%d",&y);
        z=x;
        x=y;
        y=z;
        printf("\n Number 1:%d",x);
        printf("\n Number 2:%d",y);
        printf("\n\n");
        return 0;
}
             

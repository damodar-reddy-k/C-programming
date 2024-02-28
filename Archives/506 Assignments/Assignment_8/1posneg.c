//1)Twenty five numbers are entered thru keyboard into an array of floats. Write a program to find out how many of then are positive, negative.
#include<stdio.h>
#define N 25
void main()
{
 // Reading an array of size N
 float Array[N];
 int i;
 int p=0;
 int n=0;

for(i=0;i<N;i++)
    {
     printf("\n Enter the value of %d place :", i);
     scanf("%f", &Array[i]);
    }

//printing the array
printf("\n The array you have entered is [");
for(i=0;i<N;i++)
    {
     printf(" %f", Array[i]);
    }
printf(" ]\n");

// Finding number of positives and negatives
for(i=0;i<N;i++)     // Number of positives
    { 
     if(Array[i]>0)
       p = p + 1;
     else
     if(Array[i]<0) // Number of negatives
       n = n + 1;
    }
printf("\nThe number of positives are %d \nThe number of negatives are %d\n",p,n);
}

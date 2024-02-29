//2. Write a program which swaps even and odd postion numbers in an array of 10 doubles.
#include<stdio.h>
#define N 10
double swap(double *a, double *b);
void main()
{
 int i;
 double Array[N];
//int n;
//printf("\n Enter the size of the array :");             // when 'N' is not fixed
//scanf("%d",n);

//Reading the array
 for(i=0;i<N;i++)
    {
      printf("\n Enter the value of %d place :", i);
      scanf("%lf", &Array[i]);
     }

//printing the array
printf("\n The array you have entered is [");
for(i=0;i<N;i++)
    {
     printf(" %lf", Array[i]);
    }
printf(" ]\n");


//swapping even and odd postions
for(i=0;i<N;i=i+2)
    {
     swap(&Array[i],&Array[i+1]);
     printf("\nswapped");
    }

// printing the swapped array 
printf("\n The swapped array is [");
for(i=0;i<N;i++)
    {
    printf("%lf ",Array[i]);
    }
printf("]\n");
}


//Defining Swap function
double swap(double *a, double *b)
            {
             int c;
              c = *a;
             *a = *b;
             *b =  c;
            }


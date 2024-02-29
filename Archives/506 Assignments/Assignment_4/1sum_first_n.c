/*
Task : print sum of 1st n integers
Written by : Damodar Reedy K
As part of While - loop  Exercise.
*/
#include<stdio.h>
#include<math.h>
void main()
{
  int a, b, i ;                                   // Declaration
  printf("\n Enter an integer:");                 // asking input
  scanf("%d",&a);                                 // storing input in a 
  b = 0 ;                                         // setting the initial value - to use in while loop
  i = 1;                                          // setting the initial value - to use in while loop
  while(i<=a)                                     // keep adding i which is 1 to 0 until it reaches the target value' a'
       {
        b = b + i ;                               // sum of the integers
	i = i + 1 ;                               // updating the i value with every iteration
       }
  printf("\n sum of 1st %d integers is %d ", a, b );           // print the result
  printf("\n");
}

//This file has the main program for polynomials
#include"polyptr.h"
#include<stdio.h>
#include<stdlib.h>

void main()
{
	polyptr head1,head2,head;
	
	head1=createpoly();
	display(head1);
	
	head2=createpoly();
	display(head2);
	
	printf("%d",head2->coeff);
	
	head=addpoly(head1,head2);
	
	display(head);
}

//This is the functions file for polynomials
#include<stdio.h>
#include<stdlib.h>
#include"polyptr.h"

polyptr createpoly()
{
	int flag=1,c,e;
	char a;
	polyptr H;
	H=(polyptr)malloc(sizeof(poly));
	H->next=NULL;
	while(flag)
	{
		if(H!=NULL)
		{
			printf("Enter the coeff and exponent: ");
			scanf("%d,%d",&c,&e);
			getchar();
			H=insert_asc_order(H,c,e);
			printf("Do you want to continue?(y/n)");
			scanf("%c",&a);
			getchar();
			if(a=='y');
			else
				flag=0;
		}
		else
		{
			printf("Not able to allocate memory");
			flag=0;
		}
	}
	return H;
}

polyptr insert_asc_order(polyptr Head,int c, int e)
{
	polyptr temp,t = Head;
	temp = (polyptr) malloc(sizeof(poly));
	if(temp!=NULL)
	{
		temp->coeff = c;
		temp->exp=e;
		if(Head == NULL || Head->exp >= e)
		{
			if(Head->exp==e)
			{
				Head->coeff+=c;
				free(temp);
				return Head;
			}
			else
			{
				temp->next = Head;
				return temp;
			}
		}
		else
		{
			while(t->next != NULL)
			{
				if(t->exp <= e && t->next->exp > e)
				{
					if(t->exp==e)
					{
						free(temp);
						t->coeff=t->coeff+c;
						return Head;
					}
					else
					{
						temp->next = t->next;
						t->next = temp;
						return Head;
					}
				}
				else 
					t = t->next;
			}
			t->next = temp;
			return Head;
		}
	}
	else
	{
		printf("Not able to allocate memory");
		return Head;
	}
}

void display(polyptr H)
{
	while(H!=NULL)
	{
		printf("%dx^%d+",H->coeff,H->exp);
		H=H->next;
	}
	printf("\n");
}

polyptr addpoly(polyptr A,polyptr B)
{	polyptr add,head=NULL,H;
	if(A==NULL && B==NULL)
		return NULL;
	else
	{	while(A!=NULL&&B!=NULL)
		{	if(head==NULL)
			{	head=(polyptr)malloc(sizeof(poly));
				add=head;
			}
			else
			{	add->next=(polyptr)malloc(sizeof(poly));
				add = add->next;
				add->next=NULL;
			}
			if(A->exp < B->exp)
			{	add->coeff=A->coeff;
				add->exp=A->exp;
				A=A->next;
			}
			else if(A->exp > B->exp)
			{	add->coeff=B->coeff;
				add->exp=B->exp;
				B=B->next;
			}
			else
			{	add->coeff=A->coeff+B->coeff;
				add->exp=A->exp;
				A=A->next;
				B=B->next;
			}
		}
		if(A!=NULL)
			H=A;
		else if(B!=NULL)
			H=B;
		while(H!=NULL)
		{	if(H==NULL)
			{	H=(polyptr)malloc(sizeof(poly));
				H=add;
			}
			else
			{	add->next=(polyptr)malloc(sizeof(poly));
				add = add->next;
				add->next=NULL;
			}
			add->exp=H->exp;
			add->coeff=H->coeff;
			H=H->next;
		}
	}
	return head;
}

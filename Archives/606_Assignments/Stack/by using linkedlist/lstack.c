#include"lstack.h"

typedef int ElementType;

/*struct Node 
    {
	ElementType Element;
	ptrToNode Next;
    };
*/

Stack createstack(void) //Creating an empty stack and returning its pointer. S works as a dummy Node throught the implementation.
    {
      Stack S;
      S = malloc(sizeof(Stack));
      S->Next = NULL;
      return S;
    }

int isempty(Stack S) //this function checks whether the given S is empty or not. it check S->next because the original stack runs from S->next. S is just a dummy node as mentioned above.
    {
      return (S->Next == NULL? 1:0);
    }

void push(ElementType X, Stack S) //Inserting the given element on top of the existing linkedlist.
    {
      PtrToNode temp;
      temp = malloc(sizeof(PtrToNode));
      if(temp == NULL)
        printf("\n Out of Space.\n");
      else 
        { temp->Element = X;
	  temp->Next = S->Next;
	  S->Next = temp;
	}
    }

ElementType top(Stack S)// a function to return the top element of the stack
    {
      if(!isempty(S))
        return S->Next->Element;
      printf("\n Empty Stack \n");
      return 0;
    }

void display(Stack S)//A function to display all the elements in the stack using top function.
    { 
      int a;
      if(S->Next == NULL)
         {
	 printf("\n Empty Stack. \n");
	 }
      while(S->Next != NULL)
         {
	   a = top(S);
	   printf("-%d-",a);
	   S = S->Next;
	 }
    }

void pop(Stack S) //this function prints the top element using top function and deletes the top element and changes the S->next accordingly.
    { 
      PtrToNode T;
      if(!isempty(S))
        {
	  top(S);
	  T = S->Next;
	  S->Next = T->Next;
	  free(T);
	}
      else
        printf("\n Empty Stack.\n");
    }

void makeEmpty(Stack S)//This function destroys the stack but retains the dummy node S.
    {
      if(S==NULL)
        printf("\n Must use create stack first.\n");
      else
       while(!isempty(S))
             pop(S);
    }

int DisposeStack(Stack S)//This function destroys the stack by using makeEmpty function and frees the S too.
    {
      makeEmpty(S);
      free(S);
      return 0;
    }

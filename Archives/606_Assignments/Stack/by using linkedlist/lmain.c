#include"lstack.h"

void main()
     {
        int a;
	ElementType b;
	Stack A,B,C;
	A = createstack();                                                                                                                    //create an empty stack.
	display(A);                                                                                                                           //display the stack if it has any elements.
	a = isempty(A);                                                                                                                       //checking if the given stack is empty.
        ( a==1? printf("\n The given stack is empty.\n") : printf("\n The given stack is not empty.\n") );
        
	while(b!=505)                                                                                                                         //A loop that lets the user to push as many elements as he wants into the stack.
	   {
	     printf("\n (enter 505  if want to stop adding more elements)\n Enter the element you want to add on top of the stack : ");
	     scanf("%d", &b);
	     if(b!=505)
	       push(b,A);
	   }
	a = top(A);                                                                                                                           //finding whats there on top of the stack.
	printf("\n The top element of the given stack is %d \n",a);                                                                           //and printing the top element of the stack.
	display(A);
	printf("\n please enter '1' if you want to pop the top element in the stack. Enter '0' if you dont want to : ");
        scanf("%d",&a);
	if(a==1)
	  pop(A);                                                                                                                             //popping the top element.
	printf("\n The top element now : %d",top(A));
	a = isempty(A);                                                                                                                       //checking if the given stack is empty.
	( a==1? printf("\n The given stack is empty.\n") : printf("\n The given stack is not empty.\n") );
	display(A);
	makeEmpty(A);                                                                                                                         //making the stack empty but not deleting the dummy node.
	printf("\n Top element after making the stack empty : %d",top(A));
	a = isempty(A);
        ( a==1? printf("\n The given stack is empty.\n") : printf("\n The given stack is not empty.\n") );
	a = DisposeStack(A);printf("\n\t\t\t DISPOSED\n");                                                                                                                      //deleting the stack completely. 
	//a = isempty(A);
        ( a==0? printf("\n The given stack is empty.\n") : printf("\n The given stack is not empty.\n") );
     }

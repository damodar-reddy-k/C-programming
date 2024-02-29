#include<stdio.h>
#include<stdlib.h>

//#ifndef_lstack.h
//  #define__lstack.h
  struct Node;
  typedef struct Node *PtrToNode;
  typedef PtrToNode Stack;
  typedef int ElementType;
  struct Node 
     {   
         ElementType Element;
         PtrToNode Next;
     };

  Stack createstack(void);
  void display(Stack S);
  int isempty(Stack S);
  void push(ElementType X,Stack S);
  ElementType top(Stack S);
  void pop(Stack S);
  void makeEmpty(Stack S);
  int DisposeStack(Stack S);
//  #endif //__lstack.h

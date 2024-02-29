#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
        char data;
        struct node *next;
        }Node;

void Display(Node* H);
int count(Node *H);
Node *insertafterpos(Node *H,char X,int pos);
Node *deletechar(Node *H,char X);
Node *insertas(Node *Z,char X);
Node *insertde(Node *Z,char X);

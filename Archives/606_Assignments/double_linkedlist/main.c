//This is main.c file. It contains the implementation of all the functions that are defined in dll.c
//#include<stdio.h>
#include"dll.h"
//#include<stdlib.h>
void main(){
int a,b,c,d,e,f;
char u,v,w,x,y,z;
dnode *Head,*Tail,*P,*Q,*R;
//Head = malloc(sizeof(dnode));
//Head->left = NULL;
//Head->right = NULL;

//Create linkedlist to store the chars that user enters.
Head = Create();
Display(Head);

Find(Head);

Head = Delete(Head);
Display(Head);

printf("\nPlease enter the character that needs to be inserted :");
scanf("%c",&u);getchar();
printf("\nEnter the position at which the given character needs to be inserted :");
scanf("%d",&a);

Head = Insertafterpos(Head,u,a);
Display(Head);

Head = Deletelist(Head);
Display(Head);

}

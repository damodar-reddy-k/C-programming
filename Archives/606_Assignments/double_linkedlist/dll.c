// This is dll.c file.It contains all the definitions of the functions that are declared in dll.h file. All these functions are being implemented with main.c file.
/*struct dllnode{ // definition of double linked list using structure.
       struct dllnode* left;
       char data;
       struct dllnode* right;
       }dnode;
*/
#include"dll.h"

dnode *Create(){//Create linkedlist to store the chars that user enters.
	int a,b;
	char u;
	dnode *Tail,*H,*P;
	H = malloc(sizeof(dnode));
	H->left = NULL;
	H->right = NULL;
	Tail = P = H;
	for(a=0, b=1; u!='0'; b++, H=H->right, H=malloc(sizeof(dnode)), H->left=P, H->right=NULL, P=H){
	   printf("\n		( Enter '0' - zero, if you dont want to input chars anymore) \n Enter the character that needs to be inserted at position %d : ",b);
	   scanf("%c",&H->data);getchar();
	   printf("-%c-",H->data);
	   u = H->data;
	   }
	printf("\n In create function");
        return Tail;
  	}

void Display(dnode *Head){
	if(Head==NULL)
	  printf("\n There is nothing to display.This double linked-list is empty");
	else
	   {  
	   printf("\n  Displaying the doubly linkedlist ");
	   while(Head!=NULL){
		printf("%c ",Head->data);
		Head = Head->right;
		}
	   }
	}

void Find(dnode *Head){
	char a; int c=0;
	if(Head == NULL)
	  printf("\n This double linkedlist is empty there is nothing to find in this.");
	else{
	    printf(" Enter the character that you want to search : ");
	    scanf("%c",&a);getchar();	
	    while(Head!=NULL){
                 if(Head->data == a){
	           printf("\n found the character %c",a);
		   c++;
		   break;
		 }
	         else
		   Head = Head->right;
		 }
	    printf("\n the charter %c is not present in the double linkedlist",a);
	    }
	}

dnode *Delete(dnode *Head){
       dnode *temp;
       dnode *H = Head; 
       char X;
       if(Head == NULL)
         printf("\n The given node is empty");
       else{
         printf("\n Enter the char that you want to delete : ");
	 scanf("%c",&X);getchar();
         while(Head!=NULL){
	      if(Head->data == X){
	         Head->left->right = Head->right;
		 Head->right->left = Head->left;
		 free(Head);
		 break;
		}
       	      else
	        Head = Head->right;
	      }
	 }
       }


dnode *Insertafterpos(dnode *Head,char X,int pos){
       int h,d,p = pos;
       dnode *temp,*H=Head;
       temp = malloc(sizeof(dnode));
       temp->data = X;
       temp->left = temp->right = NULL;
       printf("\n %c,%d\n",X,pos);
       if(H==NULL)
         printf("\n The given node is empty\n");
       while(p>0 && H!=NULL){ //traversing the double linked list until H reaches the position "p"
	     H=H->right;
	    p--;
	    }
       if(p==0 && H==NULL){
         Head = temp;
	 }
       else if(p==0){ //On reaching the desired position, manupulating the address values of preceding and succeeding nodes and inserting the temp node.
              temp->right = H; //printf("\n s1");
	      temp->left = H->left; //printf("\n s2");
	      temp->left->right = temp; //printf("\n s3");
	      H->left = temp; //printf("\n s4");
	      printf("\ninsertion done,call display function to check\n");
	     }
       else if(p>0)
              printf("\nThe given linked list is small enough to insert after position %d\n",pos);
       return Head;
       }

void *Deletelist(dnode *Head){
       dnode *H;
       while(Head!=NULL){
       	    H = Head;
	    Head = Head->right;
	    free(H);
	    } 
	free(Head);
       return NULL;
       } 

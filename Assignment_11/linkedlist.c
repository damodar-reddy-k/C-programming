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

void main(){
     int pos; char X,Y;
     Node *f,*s,*t,*four,*five,*H; //declaring 3 Nodes
     f = (Node *)malloc(sizeof(Node)); // allocating memory for each node 3 lines from here.
     s = (Node *)malloc(sizeof(Node));
     t = (Node *)malloc(sizeof(Node));
     four = (Node *)malloc(sizeof(Node));
     five = (Node *)malloc(sizeof(Node));
     H = (Node *)malloc(sizeof(Node));
     f->data = 'A'; //Inserting the chars in the nodes
     s->data = 'B';
     t->data = 'C';
     four->data = 'D';
     five->data = 'E';
     H = f;
     f->next = s; //Linking the nodes with each other
     s->next = t;
     t->next = four;
     four->next = five;
     five->next = NULL;
     Display(H); //calling the display function, it should print A,B,C
     printf("\n %d", count(H)); //calling count function to print the total nodes in which i have my characters.
//inserting after a position
     printf("\n Enter the character that needs to be inserted : ");
     scanf("%c",&X);
     printf("\n Enter the position after which the character needs to be inserted : ");
     scanf("%d",&pos);
     H = insertafterpos(H,X,pos);// calling insertion function with first node, char and its postion as input and assigning the output node back to H.
     Display(H);
//Deleting a char
     printf("\n Please enter a character that you want to delete : ");getchar();
     scanf("%c",&Y);
     H = deletechar(H,Y); // calling deletion function and assigning the output node back to H.
     printf("\nList after the deletion : ");
     Display(H);
//Inserting a char in ascending order
     printf("\n Enter a char to insert in a ascending order : ");getchar();
     scanf("%c",&X);
     insertas(H,X);
     printf("\nprinted list after insert in ascending order");
     Display(H);
     printf("\n End of main function\n");
     }

void Display(Node* H){ //definition of display function
     Node *t = H;
     while(t!=NULL){
          printf(" %c",t->data);
	  t = t->next;
	  }
     }

int count(Node *H){ //definition of count function
    int c = 0;
    while(H!=NULL){
         c++;
	 H=H->next;
	 }
    return c;      	 
    }

Node *insertafterpos(Node *H,char X,int pos){ //definition of insert after position function
     Node *t;
     Node *F = H;
     int c=1;
     t = malloc(sizeof(Node));
     t->data = X;
     if(pos==0 || H->next == NULL){
       if(H->next == NULL){
         t->next = H;
	 return t;
	 printf("\n The size of input list was only 1");
	 }
      else{
       t->next = H;
       return t;
         }
       }
     while(c<pos){
          if(H->next == NULL){
	    printf("\n position %d doesnt exist in given list, so cant insert after it!\n",pos);
	    break;
	    }
	  else{
            H = H->next;
	    c++;
	    }
	  }
     if(c==pos){
       t->next = H->next;
       H->next = t;       
       printf("\n List after insertion :");
       } 
     return F;
     }


Node *deletechar(Node *H,char X){ //definition of delete function
     Node *prev = NULL;
     Node *curr = H;
     Node *R = H;
     char D = X;
     while(curr!=NULL){
          if(curr->data == X){
	    if(curr == H)
	      H = H->next;
	    else
	      prev->next = curr->next;
	    break;
	  }

	  else{
	    prev = curr;
            curr = curr->next;
            } 
	  }
     free(curr);
     return H;
    }

Node *insertas(Node *Z,char X){ //instert in a ascending order
     Node *m,*temp,*temp1;printf("\n inside function");
     temp = malloc(sizeof(Node));
     m = Z;
     temp->data = X;
     if(Z==NULL)
       return temp;
     while(m!=NULL){
          if(m->next == NULL || X <= m->data){
	    if(m->next == NULL){
	      temp->next = m->next;
	      m->next = temp;
              return Z; break;
	      }
	    else {
	       temp->next = m;
	       temp1->next = temp;
	       return Z; break;
		 }
	    }
          temp1 = m;
	  m = m->next; printf("\niterating");
	  }
     }

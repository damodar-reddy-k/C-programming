#include"linkedlist.h"
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

//Inserting a char in descending order
     printf("\n Enter a char to insert in a descending order : ");getchar();
     scanf("%c",&X);
     insertde(H,X);
     Display(H);

//Inserting a char in ascending order
     printf("\n Enter a char to insert in a ascending order : ");getchar();
     scanf("%c",&X);
     insertas(H,X);
     printf("\nprinted list after insert in ascending order");
     Display(H);
     printf("\n End of main function\n");
     }

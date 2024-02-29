#include"linkedlist.h"

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
     Node *m,*temp,*m1,*V;
     printf("\n inside function");
     temp = malloc(sizeof(Node));
     m = Z;
     V = Z;
     temp->data = X;
     temp->next = NULL;
     while(m!=NULL){
     	  if(Z->next == NULL){// case1 : if there is only one node
	    if(X <= m->data){//subcase1 : if the char in temp is less than the char in that one node.
	      temp->next = Z;
	      return temp;
	      }
	    else{//subcase2 : if the char is greater than that one node.
	      Z->next = temp;
	      return V;
	      }
	    }
	  else if(temp->data <= m->data){//case2 : if Z has more than one node, compare data at each node of Z and if it is less or equal, insert the temp there only.
	         if(m1 == NULL){//subcase : if the condition is true in the first iteration only.
		   temp->next = m;
		   return temp;
		   }
		 else{//if the condition is true after iteration 1.
		   printf("\n Almost there");
		   temp->next = m;
		   m1->next = temp;
		   return V;
		   }
	         }
	  else{//case3 : if the above conditions are false, traverse or ..
	     if(m->next == NULL){//but if there is no node after m, and because the data char is more than the Z char, attach the Z to temp and return Z.
	       m->next = temp;
	       return V;
	       }
	     else{//else store m address to use while inserting in m1 and then traverse..
	       m1 = m;
	       m = m->next;
	       return V;
	       }
	    } 
          }
       }

Node *insertde(Node *Z,char X){ //instert in a descending order
     Node *m,*temp,*m1,*V;
     printf("\n inside function");
     temp = malloc(sizeof(Node));
     m = Z;
     m1 = NULL;
     temp->data = X;
     temp->next = NULL;
     while(m!=NULL){
     	  if(Z->next == NULL){// case1 : if there is only one node
	    if(temp->data >= m->data){//subcase1 : if the char in temp is less than the char in that one node.
	      temp->next = Z;
	      return temp;
	      }
	    else{//subcase2 : if the char is greater than that one node.
	      Z->next = temp;
	      return V;
	      }
	  }
	  else if(temp->data >= m->data){//case2 : if Z has more than one node, compare data at each node of Z and if it is greater or equal, insert the temp there only.
	         if(m1 == NULL){//subcase : if the condition is true in the first iteration only.
		   temp->next = m;
		   return temp;
		   }
		 else{//if the condition is true after iteration 1.
		   temp->next = m;
		   m1->next = temp;
		   return V;
	           }
	         }
	  else{//case3 : if the above conditions are false, traverse or ..
	     if(m->next == NULL){//but if there is no node after m, and because the data char is more than the Z char, attach the Z to temp and return Z.
	       m->next = temp;
	       return V;
	       }
	     else{//else store m address in m1 to use while inserting in Z and then traverse..
	       m1 = m;
	       m = m->next;
	       return V;
	       }
	    } 
	  }
     }

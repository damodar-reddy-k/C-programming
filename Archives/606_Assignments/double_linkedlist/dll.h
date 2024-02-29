// This is dll.h file.It contains all the declarations of the functions defined in dll.h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct dllnode{ // defintion of double linked list using structres
		struct dllnode* left;
		char data;
		struct dllnode* right;
		}dnode;

dnode *Create();
void Display(dnode *Head);
void Find(dnode *Head);
dnode *Delete(dnode *Head);
dnode *Insertafterpos(dnode *Head,char X,int pos);
void *Deletelist(dnode *Head);

#include<stdio.h>

void main(){
FILE *f1,*f2;
int l=0,w=0,c=0;
char p;

f1 = fopen("0.txt","r");

while((p=fgetc(f1))!=EOF){
     if(p=='\n'){// 10 is the ascii value of new line.
     	l++;
	w++;
	}
     if(p==' ' || p=='\t')
     	w++;
     c++;
     }
     printf("\n Total number of lines = %d.\n Total number of words = %d.\n Total number of characters = %d.\n",l,w,c);
     }

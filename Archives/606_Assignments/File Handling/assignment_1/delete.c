#include<stdio.h>

void main(){
FILE *f1, *f2;
int n,l=0;
char c;
	f1 = fopen("0.txt","r");
	f2 = fopen("dummy.txt","a");
	printf("\n Enter the line number that you want to delete : ");
	scanf("%d", &n);
        while((c=fgetc(f1))!=EOF){//condition to copy the char and check EOF.
		if(c=='\n'){//condition to check new line and increment.
		   if(c==l){//condition to traverse until next \n and start inserting in f2.
		      while((c=fgetc(f1))!=EOF){//condition to copy and check EOF_if there are more lines, it will make the pointer point to new line which will be dealt below
		    	 c=fgetc(f1);
			 if(c=='\n'){//after skipping that line, copy the chars back to f2
			    while((c==fgetc(f1))!=EOF){
			  	  fputc(c,f2);
				}
			  }
		       }
		     }
		  l++;   
		  }
		 fputc(c,f2);
		}
	  }

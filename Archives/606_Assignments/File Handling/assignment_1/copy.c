#include"stdio.h"
void main(){
     FILE *f1, *f2;
     char c;

     f1 = fopen("s.txt", "r");
     f2 = fopen("d.txt","w");

     while((c=fgetc(f1))!=EOF){
           //c = fgetc(f1);
	   printf("\n-%c-",c);
     	   fputc(c,f2);
		}
     fclose(f1);
     fclose(f2);
     printf("\n End of Main function\n");
	}

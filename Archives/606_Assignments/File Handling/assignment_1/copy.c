#include"stdio.h"
void main(){
     FILE *f1, *f2;
     char c;

     f1 = fopen("s.txt", "r");
     f2 = fopen("d.txt","w");

     while((c=fgets(f1))!=EOF){
	   printf("\n-%c-",c);
     	   fputc(c,f2);
		}
     fclose(f1);
     fclose(f2);
     printf("\n End of Main function\n");
	}

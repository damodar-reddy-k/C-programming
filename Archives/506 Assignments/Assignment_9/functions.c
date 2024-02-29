// This functions.c file. contains all definitions of all my files.
#include<stdio.h>
#include"functions.h"
char * inputstring(char *);//
int istrlen(char *); //D
void istrcpy(char *,char *); //D
char* istrconcat(char *, char *);//D
char* istrcom(char *,char *);//Hold
char * altchars(char *str);//

//string length function
int istrlen(char *s){
    int length = 0;
    while(*s){
         length++;
         *s++;
        }
     return length;
   }


//string copy function
void istrcpy(char *t,char *s){
     do
      {
       *t=*s;
       s++;t++;
     }while(*s!='\0');
   }


//concatenation function
char* istrconcat(char *t, char *s){
      int j,l,o,i;
      l = istrlen(t);
      o = istrlen(s);
      for(i=l,j=0;j<o;i++,j++){
 	 t[i]=s[j];
	// printf("\nthe char is :");
	// printf("%c",t[i]);
        }
      t[(l+o)]='\0';
      return t;
    }

//compare function
char* istrcom(char *t, char *s){
    int i,j;
    int r=0;
    for(i=0;i<istrlen(t);i++){
        if(t[i]==s[i])
	  r++;
       }
    if(r==0)
      t  ="same";
    else 
      t  ="different";
    return t;
    }

//input string function
char * inputstring(char *str){
       printf("\nPlease enter a string : ");
       scanf("%s",str);
       return str;
    }

//To print alternative characters
char * altchars(char *str){
    int i = 0; int j = 0;
         for(i=0,j=0;str[i] !='\0';i++,j++){
	    if(i%2==0)
              str[j]=str[i];
	    }
	 str[j+1]='\0';
	 return str;
    }
        


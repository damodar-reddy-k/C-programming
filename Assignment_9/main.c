//This is main.c file. intended to test funtiuons.c and .h
#include<stdio.h>
#include"functions.h"
void main(){
 int i = 1;
 char k;
 char str1[40];
 char str2[40];
 char sors[40];
 char dest[40];
 char conk[40];
 char dest1[100];
    do{
      printf("\n a = to know the length of a string\nb = to copy a string\n c = to concat two strings\nd = to compare two string\nmanymore are coming...");
      printf("\nplease enter the character associated with the operation you want to perform:");
      scanf("%c",&k);

      switch(k){
            case'a': {inputstring(str1);
	              printf("The length of the string <%s> is %d\n", str1,istrlen(str1));
	   	      };break;
	    case'b': {inputstring(sors);
	              istrcpy(dest,sors);
		      printf("\nthe source string is %s and the destination string is %s\n",sors,dest);
		      };break;
            case'c': {inputstring(str1);
	              inputstring(str2);
	              istrconcat(str1,str2);
                      printf("\nthe concatenated string is <%s>\n",str1);
	              };break;
	    case'd': {inputstring(str1);
	              inputstring(str2);
		      printf("\nThe two strings are %s",istrcom(str1,str2));
	              };break;
            default: printf("Default");break;
            }
    printf("\nEnter 0 to stop using this program and 1 to continue using: ");
    scanf("%d",&i);}while(i==1);
   }

/*
 inputstring(str1);
 printf("you have entered:%s\n", str1);

 n = istrlen(str1);
 printf("the length of the string is %d",n);


 inputstring(str2);
 istrcpy(dest,str1);
 printf("\n(string copy)the source string is %s and the destination string is %s\n",str1,dest);     
 istrconcat(str1,str2);
 printf("\n(string concat)the source string is %s \n the concatenatied string is:%s\n",str2,str1);
 r = istrcom(str1,str2);
 printf("Compared the given strings and they are %d",r);
 */


#include<stdio.h>

void main(){
 char *word[10];

 printf("\n\t Enter a word : " );
 scanf("%s", word[2]);
 printf("\n\t u have entered : %s", word[2]);
 printf("\n\n\t\t\t the size of 1 word is %ld bytes\n", sizeof(word));
}
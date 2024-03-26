#include "header.h"

void correctit(char *word[0]){
    char temp;
    int i,j,k =0;

    printf("\nThe original word before beginning is %s\n", word[0]);

 //Case : when a use enters a letter faster or slower. correcting this by interchanging all adjacent characters.
    for(i=0,j=1 ; word[0][j]!='\0'; i++,j++){
              temp = word[0][i];
        word[0][i] = word[0][j];
        word[0][j] = temp;
        if(check(word[0])){     
            if(!k){
              printf("\n The possible correct words are : ");
              printf("%s\n",word[0]);
              k++;
            }
        else
            printf("\t\t\t%s\n",word[0]);        
        }
              temp = word[0][i];
        word[0][i] = word[0][j];
        word[0][j] = temp;       
    } 

 //Case : If the user enter a word with 1 unnecessary character ?
    int l,m,n;
    
    for(l=1; l < 5; l++){
        printf("\n Second case %ld \n", strlen(word[0]));
        char temp = word[0][l];
        for(m=l, n=m+1; m < strlen(word[0]); n++,m++){
            word[0][m] = word[0][n];
        }
        if(check(word[0])){     
            if(!k){
                printf("\n The possible correct words are : ");
                printf("%s\n",word[0]);
                k++;
            }
            else
                printf("\t\t\t%s\n",word[0]);        
        }
    word[0][l] = temp;    
    }
//If user misses a character


    printf("\nThe original word before ending is %s\n", word[0]);
}
#include "header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dictionary.h"

void correctit(char *word[0]){
    char temp;
    int i,j,k = 0;

                                                          //printf("\nThe original word before beginning is %s\n", word[0]);

/*//Case 1: when a use enters a letter faster or slower. correcting this by interchanging all adjacent characters.
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

// Case 2: If the user enter a word with 1 unnecessary character ?
    //if(!k){
                                                           // printf("\n Case1 didnt work \n");
        int l,m,n;    
        
        for(l=0; l < strlen(word[0]); l++){                // Selecting a char.
            char temp = word[0][l];                        // Copying the character that is going to be deleted
            
            for(m=l, n=m+1; n < strlen(word[0]); n++,m++){ // Deleting the char by shifting every char 
                word[0][m] = word[0][n];
            }
            word[0][m] = '\0';                             // Ending of char array
            if(check(word[0])){                            // Checking if the modified word is correct or not.
                if(!k){
                    printf("\n The possible correct words are: ");
                    printf("%s\n",word[0]);
                    k++;
                }
                else
                    printf("\t\t\t\t %s\n",word[0]);     
            }   
                                                           // printf("\n word len : %ld and l=%d ; m=%d ; n=%d and the word is %s\n", strlen(word[0]),l,m,n,word[0]);             
            for( m--,n-- ;  m >= l ; n--,m--){             // taking all chars to their original positions
                word[0][n] = word[0][m];
            } 
            word[0][l] = temp;
                                                           // printf("\n\t REMOVED THE CHAR : %c",temp);
                                                           // printf("\n Checking if I have the original word \nword len : %ld and l=%d ; m=%d ; n=%d and the word is %s\n", strlen(word[0]),l,m,n,word[0]);
            
        }   
    //}
*/
  
//Case 3: If user misses a character
    word[1] = "abcdefghijklmnopqrstuvwxyz";
    int x,y,z; char t1,t2;

    for(y = 0; y < strlen(word[0]) ; y++){
        for(x=y,t1 = 'a'; x < (strlen(word[0])-y); x++){
                t2 = word[0][x];
                word[0][x] = t1;
                t1 = t2;
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
        for(z=1; z<26 ;z++){
                word[0][y] = word[1][z];

                if(check(word[0])){
                    if(!k){
                       printf("\n The possible correct words are : ");
                       printf("%s\n",word[0]);
                       k++;
                       }
                    else
                       printf("\t\t\t%s\n",word[0]);
                    }
        }
    for( ; y < strlen(word[0])-1 ; y++){
        word[0][y] = word[0][y+1] ;
        }
        word[0][y] = '\0' ;
    }

//Case 4: If user enters a 1 wrong
    int a,b,c; char t3;

    for(a=0 ; a<strlen(word[0]) ;a++){
        t3 = word[0][a];

        for(b=0; b<26 ;b++){
            word[0][a] = word[1][b];
            if(check(word[0])){
                if(!k){
                   printf("\n The possible correct words are : ");
                   printf("%s\n",word[0]);
                   k++;
                }
                else
                   printf("\t\t\t%s\n",word[0]);
                }
        }
    }

                                                            // printf("\nThe original word before ending is %s\n", word[0]);
}
#include"header.h"

void main(int argc, char *argv[]){
    int flag = 0;
    
    flag = search_in_dictionary(argv[1]); //check whether the given word exists in the english dictionary or not.
    if(flag){
     printf("\n Correct spelling ");
    }

    else{ //If it is not present, print the word and 5 most possible correct words.
        printf("\n The most possible correct words are : ");
        corrected(argv[1]);      
    }
}
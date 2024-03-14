#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "dictionary.h"

int main(int argc, char* argv[])
{  //int flag = 1;
   //char word[30];
   if(argc != 2){
    printf("\n Enter a word while executing the program \n ");
    return 1;
   }
     

    // Load dictionary
    bool loaded = load("Dictionary.txt");
    if (!loaded)
    {
        printf("Could not load dictionary.\n");
        return 1;
    }

    // Get dictionary size
    unsigned int dict_size = size();
    printf("\nSuccessfull loaded the dictionary loaded with %u words.\n", dict_size);

    // Check some words
    printf("\n %s is a %s\n", argv[1], check(argv[1]) ? "correct_spelling\n" : "wrong spelling or Not present in the dictionary\n");
    //else
    //printf("\n %s is a %s\n", word, check(&word) ? "correct_spelling\n" : "wrong spelling or Not present in the dictionary\n");
    // Unload dictionary
    unload();

    return 0;
}
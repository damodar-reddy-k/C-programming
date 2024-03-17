#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "header.h"
#define LEN 5

int main(int argc, char* argv[])
{  //int flag = 1;
   char *word[LEN];
   word[LEN] = argv[1];
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
    //unsigned int dict_size = size();
    //printf("\nSuccessfull loaded the dictionary loaded with %u words.\n", dict_size);

    // Check some words
    if(check(word[LEN]))
      printf("\n %s is a %s\n", word[LEN],"correct_spelling\n");

    else{
      printf("\n %s is a %s\n", word[LEN],"wrong spelling or Not present in the dictionary\n");
      printf("\n\n\t The possible correct words are : ");
      int i,j,k;
      char temp;

      for( i=0,j=1 ; i<LEN-2 ; i++,j++ ){
      temp = word[i];
      word[i] = word[j];
      word[j] = temp;
      if(check(word[LEN]))
        printf(" %s", word[LEN]);
      }
    }
    // Unload dictionary
    unload();

    return 0;
}
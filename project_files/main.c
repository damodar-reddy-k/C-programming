#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#define LEN 5

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("\nEnter a word while executing the program.\n");
        return 1;
    }

    char *word[LEN];
    word[LEN+1] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < LEN; i++) {
        word[i] = (char *)malloc((strlen(argv[1]) + 1) * sizeof(char));
        if (word[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(word[0], argv[1]);
    }

    // Load dictionary
    bool loaded = load("Dictionary.txt");
    if (!loaded)
    {
        printf("Could not load dictionary.\n");
        return 1;
    }

    // Check the word
    if (check(word[0]))
        printf("\n%s is a correct spelling.\n", word[0]);
    else {
        printf("\n%s is a wrong spelling or not present in the dictionary.\n", word[0]);
        correctit(&word[0]);
    }

    // Free allocated memory
    
        free(word[0]);

    // Unload dictionary
    unload();

    return 0;
}
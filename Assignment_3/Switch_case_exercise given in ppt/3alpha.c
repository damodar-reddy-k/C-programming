/*
Task : To Print whether the given alphabet is an vowel or a consonant.
Written by : Damodar Reedy K
As part of Switch Case Exercise.
*/
#include<stdio.h>
void main()
{ 
   char Letter ;
   printf("\n Enter an alphabet :");
  scanf("%c", &Letter);
   {
    switch(Letter)
    {
     case'a' : printf("It is an vowel"); break;
     case'A' : printf("It is an vowel"); break;
     case'e' : printf("It is an vowel"); break;
     case'E' : printf("It is an vowel"); break;
     case'i' : printf("It is an vowel"); break;
     case'I' : printf("It is an vowel"); break;
     case'o' : printf("It is an vowel"); break;
     case'O' : printf("It is an vowel"); break;
     case'u' : printf("It is an vowel"); break;
     case'U' : printf("It is an vowel"); break;
     default : printf("It is a Consonant");
    }
   }

   printf("\n");
}

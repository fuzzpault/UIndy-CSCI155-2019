/*
    Name: Paul Talaga
    Date: Sept 25, 2019
    Desc: Using strcmp with words.
          Note strcmp compares based on ASCII values, so A < a
*/
#include "stdio.h"

int main(void){
    
    printf("What is first your word?\n");
    char firstWord[50];
    scanf("%s", &firstWord);
    
    printf("What is second your word?\n");
    char secondWord[50];
    scanf("%s", &secondWord);
    
    if( strcmp(firstWord,secondWord) < 0){
        printf("%s is less than %s\n", firstWord, secondWord);
    }else if(strcmp(firstWord,secondWord) == 0){
        printf("%s is the same as %s\n", firstWord, secondWord);
    }else{
        printf("%s is greater than %s\n", firstWord, secondWord);
    }
   
    return 0;
    
}
/*
    Name: Paul Talaga
    Date: Sept 16, 2019
    Desc: A demonstration of character input.
*/

#include "stdio.h"
#include "stdbool.h"

int main(void){
    
    char letter = 'a';
    
    printf("Enter your favorite letter\n");
    scanf("%c", &letter);
    
    printf("Wow, I thought more of you to pick %c.\n", letter);
   
    return 0;
    
}
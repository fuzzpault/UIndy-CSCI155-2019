/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: A demonstration of ASCII characters
*/

#include "stdio.h"

int main(){
    
    char a = ' ';
    int i = 0;
    /*int anotherVariable = 97;
    printf("anotherVariable: %c \n", anotherVariable);
    
    return 0; */
   
    for(i = 0; i < 100; i++){
        printf("%i: %d -  %c \n", i, a, a);
        a = a + 1;
    }
        
    return 0;
}
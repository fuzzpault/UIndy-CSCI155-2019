/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, problem 2.
*/

#include "stdio.h"

int main(void){
    
    char c = 'a';
    int value = 2;
    
    printf("1: %c \n", c);
    printf("2: %c \n", c + value);
    value++;
    printf("3: %c \n", c + value);
    value += 2;
    printf("4: %c \n", c + value);
    
    return 0;
}
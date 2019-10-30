/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, Syntax errors.
*/

#include "stdio.h"



int main(){
    
    int value1 = 1;
    int value2 = 1;
    char name[50] = "Bob";
    
    printf("Hi %s, the result is %d", name, value1 + value2);
    
    printf("What is your real name?\n");
    scanf("%s", name);
    
    printf("And what are your favorite numbers?\n");
    scanf("%d", &value1);
    scanf("%d", &value2);
    
    printf("Nice, %d is a nice number!\n", value1 * value2);
    
    return 0;
}
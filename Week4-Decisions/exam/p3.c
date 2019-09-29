/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, problem 3.
*/

#include "stdio.h"

int main(void){
    
    char name[50];
    char flavor[50];
    unsigned int age = 0;
    const unsigned long this_year = 2019;
    
    printf("What is your name?\n");
    scanf("%s", name);
    printf("What is your favorite icecream flavor?\n");
    scanf("%s", flavor);
    printf("How old are you in years?\n");
    scanf("%d", &age);
    printf("Wow %s, I like %s as well.", name, flavor);
    printf("%d seems like a good year to be born in!\n", this_year - age);
    
    return 0;
}
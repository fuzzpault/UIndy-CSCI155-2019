/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, Program 2.
    
    Write a program to ask the user their favorite number, which could have a 
    decimal.  Print out that number, followed by it multiplied by 2,4,8,10, 
    and 12, all separated by a comma (,) on one line.

*/

#include "stdio.h"

int main(){

    float favNumber = 0.0;
    printf("What is your favorite number?\n");
    scanf("%f", &favNumber);
    
    printf("%f,%f,%f,%f,%f\n", favNumber,
        favNumber * 2,
        favNumber * 4,
        favNumber * 8,
        favNumber * 10);
        
    return 0;
}
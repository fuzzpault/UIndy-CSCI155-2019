/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, Program 3.
    
    Ask the user to enter a 3 digit number.  Print out each digit one per line

*/

#include "stdio.h"

int main(){

    int n = 0;
    printf("give me a 3-digit number:\n");
    scanf("%d", &n);
    
    printf("First digit: %d\n", n / 100);
    printf("Second digit: %d\n", (n / 10) % 10);
    printf("Third digit: %d\n", n % 10);
        
    return 0;
}
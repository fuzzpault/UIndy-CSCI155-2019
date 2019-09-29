/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Exam 1, Program 1.
    Write a program to ask the user their name and age in years.  
    Respond back with a sentence including their name and how many days and 
    seconds old they are.  Do not worry about leap years or what 
    month/day/time of day they were born, just base your calculations on years old.
*/

#include "stdio.h"

int main(){
    char name[50] = "";
    int ageYears = 0;
    printf("What is your name?\n");
    scanf("%s", name);
    
    printf("How old are you in years?\n");
    scanf("%d", &ageYears);
    
    printf("Wow %s, that is %d days old, or %d seconds old!\n", name,
        ageYears * 365,
        ageYears * 365 * 24 * 60 * 60);
        
    return 0;
}
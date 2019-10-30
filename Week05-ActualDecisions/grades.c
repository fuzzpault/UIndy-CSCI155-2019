/*
    Name: Paul Talaga
    Date: Sept 25, 2019
    Desc: Uses if statements to print out letter grades for a user-supplied
          number grade.  Input validation is done for < 0 and > 100.
*/
#include "stdio.h"

int main(void){
    
    printf("What is your number grade? (0-100)\n");
    int grade = 0;
    scanf("%d", &grade);
    
    if(grade < 0 || grade > 100){
        printf("That isn't a valid input!\n");
        return 0;
    }
    
    printf("You entered a %d, that is an ", grade);
    if(grade < 65){
        printf("F");
    }else if(grade < 70){
        printf("D");
    }else if(grade < 80){
        printf("C");
    }else if(grade < 90){
        printf("B");
    }else{
        printf("A");
    }
    
    if(grade % 10 <= 3 && grade > 70){
        printf("-");
    }else if (grade % 10 > 7 && grade > 70 && grade < 95){
        printf("+");
    }
    //printf(" with last digit %d", grade % 10);
    printf("\n");
    
   
    return 0;
    
}
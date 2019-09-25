/*
    Name: Paul Talaga
    Date: Sept 25, 2019
    Desc: Uses if statements to print out letter grades for all numeric
          grades from -40 to 115.
          This will print to the screen, so on Cloud9 you may not see all the 
          lines due to Cloud9 issues.  To see the full output, do:
          gcc -Wall allgrades.c
          ./a.out > grades.txt
          Then open up grades.txt.  The > operator on the command-line redirects
          all output to a file.
*/
#include "stdio.h"

int main(void){
    
    
    int grade = 0;
    int number = 0;
    for(grade = -40; grade <= 115; grade++){
    
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
        
        if(grade % 10 <= 3 && grade >= 70 && grade < 100){
            printf("-");
        }else if (grade % 10 > 7 && grade >= 70 && grade < 95){
            printf("+");
        }

        printf("\n");
        number++;
    }
    
    printf("I calculated %d grades.\n", number);
    return 0;
    
}
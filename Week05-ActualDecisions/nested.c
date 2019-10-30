/*
    Name: Paul Talaga
    Date: Sept 23, 2019
    Desc: Comparing strings with strcmp & multiple ways of nesting or not!
*/

#include "stdio.h"


int main(void){
    
    char today[50];
    printf("What day is it?\nMonday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday\n");
    scanf("%s", today);

    
    if( strcmp(today,"Saturday") == 0 || strcmp(today,"Sunday") == 0){
        printf("It's the weekend!\n");
    }else{
        printf("Weekday, get to school!\n");
        if(strcmp(today,"Monday") == 0){
            printf("Sorry!")
        }
    }
    
    // OR!
    
    if( strcmp(today,"Saturday") == 0 || strcmp(today,"Sunday") == 0){
        printf("It's the weekend!\n");
    }else if(strcmp(today,"Monday") == 0){
        printf("Weekday, get to school!\n");
        printf("Sorry!\n");
    }else{
        printf("Weekday, get to school!\n");
    }
    
   
    return 0;
    
}
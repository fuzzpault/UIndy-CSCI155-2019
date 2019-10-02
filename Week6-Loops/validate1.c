/*
    Name: Paul Talaga
    Date: Oct 2, 2019
    Desc: Input validation.  Keep asking until they give you what you want.
        Try: 15-3 and know what it is doing.
        Try  12.3 and know why it loops forever.

*/
#include "stdio.h"

int main(){
    
    
    printf("Give me a number from 0-10.\n");
    int number = 0;
    scanf("%d", &number);
    while( (number < 0) || (number > 10)){ // While loops when we don't know how many times it should go.
        printf("Please listen to directions, enter 0-10!");
        scanf("%d", &number);
    }
    
    printf("Thank you for your number: %d\n", number);
    
    return 0;
}
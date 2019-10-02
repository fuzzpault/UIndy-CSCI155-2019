/*
    Name: Paul Talaga
    Date: Oct 2, 2019
    Desc: Guessing game!
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    
    // This makes sure rand() gives different numbers every time the 
    // program is run.  It starts in the 'file' based on the current time.
    srand(time(NULL)); // seed random number generator
    
    printf("Give me a number from 0-99.\n");
    int number = rand() % 100;
    int guess = -1; // Setting 0 could win if rand chose it!  1/100 chance.
    int numberGuessed = 0;
    while(guess != number){ // While loops when we don't know how many times it should go.
        printf("Please guess the number\n");
        scanf("%d", &guess);
        if(guess < number){
            printf("You guessed too low.\n");
        }else if(guess > number){
            printf("You guessed too high.\n");
        }else{
            printf("You won!\n");
        }
        numberGuessed++;
        printf("You guessed %d times\n", numberGuessed);
    }
    
    
    return 0;
}
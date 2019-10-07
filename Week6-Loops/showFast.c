/*
    Name: Steve Spicklemire
    Date: Oct 3, 2019
    Desc: Just show me the first "random" number.
*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    
    // This makes sure rand() gives different numbers every time the 
    // program is run.  It starts in the 'file' based on the current time.
    srand(time(NULL)); // seed random number generator
    
    printf("I have a random number for you! %u\n", rand());

    return 0;
}

/*
    Name: Paul Talaga
    Date: Oct 2, 2019
    Desc: Simple while loop 0...15

*/
#include "stdio.h"

int main(){
    
    int i = 0;
    // Any loop can be written as a while, for, or do-while.
    // Normally while loops are used when we don't know how many times
    // it will need to go.  The example below would be better as a 
    // for loop.
    while(i <= 15){ 
        printf("i: %d\n", i);
        i += 1;
    }
    
    // Note: Watch out when going down (i--) using unsigned as it will never go
    //       negative!
    
    return 0;
}
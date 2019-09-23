/*
    Name: Paul Talaga
    Date: Sept 23, 2019
    Desc: Putting assignment into a conditional.  Don't do!
*/

#include "stdio.h"


int main(void){
    
    int a = 5;
    int b = 5;
    
    // NEVER DO THIS!  = is assignment, so the if statement will be based on the
    // VALUE of b, not if it is the same as a.
    // You should always use == for comparing.
    if( a = b ){
        printf("Yay, life is good!\n");
        printf("More goes here\n");
    }else{
        printf("You need to rethink your life decisions.\n");
    }
    printf("a: %d b: %d \n", a, b);
    
   
    return 0;
    
}
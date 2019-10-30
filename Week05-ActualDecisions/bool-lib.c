/*
    Name: Paul Talaga
    Date: Sept 23, 2019
    Desc: Using the stdbool library so bool and friends are available.
*/

#include "stdio.h"
#include "stdbool.h"    // Now we can use bool, true, and false.


int main(void){
    
    bool donuts = true;
    
    if(donuts){
        printf("Yay, life is good!\n");
    }else{
        printf("You need to rethink your life decisions.\n");
    }
    
    printf("bool size: %d \n", sizeof(donuts)); // It is 1 byte, strange!
   
    return 0;
    
}
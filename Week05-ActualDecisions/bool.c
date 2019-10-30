/*
    Name: Paul Talaga
    Date: Sept 23, 2019
    Desc: Without bool, int and #define can be used.
*/

#include "stdio.h"
#define TRUE 1
#define FALSE 0

int main(void){
    
    int donuts = TRUE;
    FALSE = 5;
    
    if(donuts){
        printf("Yay, life is good!\n");
    }else{
        printf("You need to rethink your life decisions.\n");
    }
    
   
    return 0;
    
}
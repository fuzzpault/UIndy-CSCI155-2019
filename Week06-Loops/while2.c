/*
    Name: Paul Talaga
    Date: Oct 2, 2019
    Desc: Other ways of printing 10..0

*/
#include "stdio.h"

int main(){
    
    printf("First while\n");
    // i goes down.
    int i = 10;
    while(i >= 0){ // While loops when we don't know how many times it should go.
        printf("i: %u\n", i);
       i--;
    }
    
    printf("Second while\n");
    // i goes up, but we print 10 - i, so it goes down.
    i = 0;
    while(i < 10){ // While loops when we don't know how many times it should go.
        printf("i: %u\n", 10 - i);
       i++;
    }
    
    // Note the while loop below will do nothing forever because of the
    // ; after the while.  It constantly checks the conditional and doesn't
    // execute the {} code.  
    /*
    printf("Third while\n");
    i = 0;
    while(i < 10);{ // Note the ;
        printf("i: %u\n", 10 - i);
       i++;
    } */
    
    return 0;
}
/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Example output of an uninitialized variable.
*/

#include "stdio.h"

int main(){
    
    int a;
    printf("a: %d \n", a);  // This may be 0, or garbage!  
                            // Better to set the value whenever declaring
                            // gcc -Wall will give you a warning about this.
    a = 5;
    printf("a: %d \n", a);
        
    
    return 0;
}
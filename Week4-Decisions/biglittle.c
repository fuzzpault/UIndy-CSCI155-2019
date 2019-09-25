/*
    Name: Paul Talaga
    Date: Sept 16, 2019
    Desc: A demonstration of float/double, rounding, and how the 
          the values added may cause data loss.
*/

#include "stdio.h"
#include "stdbool.h"

int main(void){
    
    // Try this below using floats or double
    double big = (float)12345674.1;
    double little = 0.45;
    
    printf("%f + %f = %f\n", big, little, big + little);
    
    return 0;
    
}
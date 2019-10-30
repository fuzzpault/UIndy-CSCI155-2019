/*
Functions
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

double multiplyByThree(double theInput) {
    double theResult = 3*theInput;
    
    return theResult;
}

int main() {
    
    int i = 0;
    double value = 0.0;
    
    for ( i = 0; i<10; i++) {
        value  = multiplyByThree(i);
        printf("For input %d, we got back: %lf\n", i, value);
    }

    return 0;
}


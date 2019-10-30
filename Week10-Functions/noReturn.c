/*
Functions
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

int foo(int z) {
    int x=3;
    int y = 3*x + z;
    // return y; what happpens if we don't have a return?
}

int main() {
    
    foo(9);

    return 0;
}


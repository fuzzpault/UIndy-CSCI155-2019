/*
Functions
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

int myFunc(int number) {
    return number*number;
}

int myFuncByPointer(int *numberPtr) {
    int result = (*numberPtr)*(*numberPtr);
    *numberPtr = 0;
    return result;
    
}

int main() {
    
    int x = 3;
    int *y = &x;
    printf("Calling by value: %d\n", myFunc(x));
    printf("Calling by pointer: %d\n", myFuncByPointer(y));
    printf("x=%d\n", x);

    return 0;
}


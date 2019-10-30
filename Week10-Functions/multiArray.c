/*
Functions
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

int arraySum(int theArray[], int theSize) {
    
    int i = 0;
    int sum = 0;
    
    for( i = 0; i < theSize; i++) {
        sum = sum + theArray[i];
    }
    
    return sum;
}



int main() {
    
    int myArray1[] = {1,1,1,1,1,1,1,1};
    int myArray2[] = {2,2,2,2,2,2,2,2};
    int N = 8;
    
    printf("The sum is: %d\n", arraySum(myArray1, N));
    printf("The sum is: %d\n", arraySum(myArray2, N));

    return 0;
}


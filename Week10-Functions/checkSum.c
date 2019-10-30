/*
Functions
Steve Spicklemire
Oct 29, 2019
*/

#include <stdio.h>

int checkSum(int anArray[], int size, int maxVal) {
    int i = 0;
    int sum = 0;
    for (i = 0; i< size; i++) {
        sum += anArray[i];
    }
    return sum<maxVal;
}


int main() {
    
    int myArray1[] = {1,1,1,1,1,1,1,1};
    int myArray2[] = {2,2,2,2,2,2,2,2};
    
    if (checkSum(myArray1, 8, 9)) {
        printf("myArray1 is OK\n");
    } else {
        printf("myArray1 is not OK\n");
    }

    
    if (checkSum(myArray2, 8, 9)) {
        printf("myArray2 is OK\n");
    } else {
        printf("myArray2 is not OK\n");
    }

    return 0;
}


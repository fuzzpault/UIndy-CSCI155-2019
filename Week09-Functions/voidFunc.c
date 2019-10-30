/*
Functions
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

void printNNumbers(int n) {
    
    int i=0;
    for(i=0; i<n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    
    printNNumbers(12);

    return 0;
}


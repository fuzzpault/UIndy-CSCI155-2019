/*
    Name: Steve Spicklemire
    Date: Oct 7, 2019
    Desc: Nested Loops

*/
#include <stdio.h>

int main(){
    
    const int numCols = 7;
    const int numRows = 7;
    
    int row = 0;
    int col = 0;
    int val = 0;
    
    printf("   ");
    for (col = 1; col <= numCols; col++) {
        printf(" %2d ", col);
    }
    printf("\n----");
    for (col = 1; col <= numCols; col++) {
        printf("----");
    }
    printf("\n");
    for (row = 1; row <= numRows ; row++) {
        printf("%d | ", row);
        for (col = 1; col <= numCols ; col++) {
            val = row*col;
            printf(" %2d ", val);
        }
        printf("\n");
    }

    return 0;
}
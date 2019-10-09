/*
    Name: Steve Spicklemire
    Date: Oct 7, 2019
    Desc: Nested Loops

*/
#include <stdio.h>

int main(){
    
    int numCols = 0;
    int numRows = 0;
    
    int row = 0;
    int col = 0;
    int val = 0;
    
    int answer = 0;
    
    do {
        printf("Would you like to print a multiplication table? 1-yes, 0-no\n");
        
        scanf("%d", &answer);
        
        if (answer == 1) {
            printf("Enter the number of rows and columns (1-10).\n");
            
            scanf("%d %d", &numRows, &numCols);
            
            while(numCols <= 0 || numCols >= 11 || numRows <= 0 || numRows >= 11) {
                printf("Hello? Are you thinking? Please try again:\n");
                scanf("%d %d", &numRows, &numCols);
            }
        
            printf("     ");
            for (col = 1; col <= numCols; col++) {
                printf(" %3d ", col);
            }
            printf("\n------");
            for (col = 1; col <= numCols; col++) {
                printf("-----");
            }
            printf("\n");
            for (row = 1; row <= numRows ; row++) {
                printf("%2d | ", row);
                for (col = 1; col <= numCols ; col++) {
                    val = row*col;
                    printf(" %3d ", val);
                }
                printf("\n");
            }
        }
    } while (answer == 1);

    return 0;
}
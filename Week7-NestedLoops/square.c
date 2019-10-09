/*
    Name: Steve Spicklemire
    Date: Oct 9, 2019
    Desc: Nested Loops

*/
#include <stdio.h>

int main(){
    
    int side = 0;
    int i = 0;
    int j = 0;

    printf("Square Drawing Program\n");
    
    printf("What side length would you like\n");
    
    scanf("%d", &side);
    
    for (i = 0; i < side; i++) {
        for (j = 0; j < side - i; j++) {
            if (j == side - i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
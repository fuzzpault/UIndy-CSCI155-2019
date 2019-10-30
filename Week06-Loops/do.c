/*
do Loop
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

void printMenu() {
    printf("Enter your choice\n");
    printf("0 - exit\n");
    printf("1 - keep going\n");
    printf("\n");
}

int main() {
    
    int choice = 0;
    
    do {
        printMenu();
        scanf("%d", &choice);
        if (choice == 1) {
            printf("OK! I'll keep going\n");
        }
    } while (choice != 0);
    
    printf("OK, all done.\n");

    return 0;
}


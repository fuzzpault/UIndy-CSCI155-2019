/*
    Name: Steve Spicklemire
    Date: Oct 7, 2019
    Desc: Nested Loops

*/
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    
    const int N=5;
    int i=0;
    char answer[50];
    
    for (i = 0; i < N ; i++ ) {
        printf("Alarm!\n");
        printf("Do you want to snooze? (yes/no) \n");
        scanf("%s", answer);
        if (strcmp(answer,"yes") != 0) {
            printf("OK! No more snoozing!\n");
            break;
        }
        printf("Snoozing...\n");
    }
    printf("Out of loop now\n");
    return 0;
}
/*
Command line arguments.
Steve Spicklemire
Nov 25, 2019
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int i = 0;
    for (i = 0; i < argc; i++) {
        printf("Arg: %d is '%s'\n", i, argv[i]);
    }
    printf("That's it!\n");

    return 0;
}

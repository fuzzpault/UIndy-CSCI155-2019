/*
Too Big Array demonstration
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>
#define SIZE 10000000

int main() {

    int bar[SIZE];
    
    printf("I have an array that is %lu bytes\n", sizeof(bar));

    return 0;
}

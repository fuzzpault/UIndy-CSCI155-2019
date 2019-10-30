/*
Too Big Array demonstration
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

int main() {

    int i = 0;
    int bar[20];
    
    for (i = 0; i < 20; i++) {
        printf("Setting bar[%d]\n", i);
        bar[i] = 0;
    }

    for (i = 0; i < 20; i++) {
        printf("bar[%d] = %d\n", i, bar[i]);
    }

    return 0;
}

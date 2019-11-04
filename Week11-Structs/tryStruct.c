/*
Try Structures.
Steve Spicklemire
Nov 4, 2019
*/

#include <stdio.h>
#include <string.h>

#define SUITSIZE 50

typedef struct card_t_str{
  char suit[10];
  int value;
} card_t;

int main() {
    
    card_t a;
    
    strcpy(a.suit,"Hearts");
    a.value = 5;

    card_t b = a;

    printf("%d of %s", b.value, b.suit);
    
    if ((a.value == b.value) && (strcmp(a.suit,b.suit) == 0)) {
        printf("Yeah they are equal!\n");
    }

    return 0;
}
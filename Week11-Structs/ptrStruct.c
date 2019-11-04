/*
Pointers to Structures.
Steve Spicklemire
Nov 4, 2019
*/

#include <stdio.h>
#include <string.h>

#define SUITSIZE 50

typedef struct card_t_str{
  int suit;
  int number;
} card_t;

int main() {
    
    card_t c;
    c.number = 5;
    c.suit = 0;

    card_t* d = &c;
    d->suit = 2;

    return 0;
}
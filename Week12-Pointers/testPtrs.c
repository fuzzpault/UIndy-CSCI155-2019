/*
Pointers in general
Steve Spicklemire
Nov 13, 2019
*/

#include <stdio.h>
#include <string.h>

int main() {

  int x = 0;
  int y = 0;

  int* p = NULL;

  p = &x;

  printf("(before) x = %d\n", x);
  printf("(before) y = %d\n", y);

  *p = 4;

  printf("(after) x = %d\n", x);
  printf("(after) y = %d\n", y);

  p = &y;
  
  *p = 7;

  printf("(after after) x = %d\n", x);
  printf("(after after) y = %d\n", y);

  return 0;
}

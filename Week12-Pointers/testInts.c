/*
Pointers to strings
Steve Spicklemire
Nov 13, 2019
*/

#include <stdio.h>
#include <string.h>

int main() {

  int foo[] = {3,6,2,7,8,0};

  int* p = NULL;

  p = foo;

  while (*p) {
    printf("%d\n", *p++);
  }

  return 0;
}

/*
Pointers to strings
Steve Spicklemire
Nov 13, 2019
*/

#include <stdio.h>
#include <string.h>

void outputString(char *s) {
  while (*s) {
    printf("%c", *s++);
  }
  printf("\n");
}

int main() {

  char *name = "hello";

  outputString(name);

  return 0;
}

/*
	Name: Steve Spicklemire
	Date: Nov 23, 2019
	Desc: More Pointer practice.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if (argc < 2) {
    printf("Please supply an argument for array size\n");
    return 0;
  }

  int size = atoi(argv[1]);
  
  printf("Attempting to allocate %d integers\n", size);

  int *largeMemory = (int *)malloc(sizeof(int)*size);

  if (largeMemory) {

    printf("Whee! We got it.\n");
    free(largeMemory);
  } else {
    printf("Dang. Too bad.\n");
  }

  return 0;
}

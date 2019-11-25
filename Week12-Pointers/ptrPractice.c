/*
	Name: Paul Talaga
	Date: April 19, 2018
	Desc: Pointer practice.
*/
#include <stdio.h>

int main(){
	int a = 5;
	int* b = &a;
	
	printf("*b: %d \n", *b);
	printf("a: %d \n", a);
	(*b)++;
	printf("*b: %d \n", *b);
	printf("a: %d \n", a);
	

	return 0;
}

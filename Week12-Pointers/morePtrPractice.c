/*
	Name: Paul Talaga
	Date: April 19, 2018
	Desc: Pointer practice.
*/
#include <stdio.h>

int main(){
	int a = 5;
	int b[] = {1,2,3,4,5,6};
	int* c = NULL;
	int** d = NULL;
	
	c = &a;
	d = &c;
	**d = 10;
	*(b+3) = 12;
	*d = (b + 1);
	b[2] = *&a;
	
	printf("a: %d \n", a);
	int i = 0; 
	for(i = 0; i < 6; i++){
		printf("b[%d] = %d \n", i, b[i]);
	}
	printf("*c: %d \n", *c);
	printf("**d: %d \n", **d);
	
	return 0;
}

#include <stdio.h>
#define SIZE 3000000

int main(){
	int hot_pockets = 37;
	int ice_cream = 2;
	int* jam = NULL;
	int* kelp = &ice_cream;
	int lemon[] = {4,5,6,7};
	int* muffins[] = {jam, kelp, lemon, &ice_cream};
	
	jam = kelp;
	lemon[0] = hot_pockets;
	kelp = &lemon[3];
	kelp[-1] = ice_cream;
	muffins[0] = lemon + 1;
	
	printf("Hot Pockets: %d", hot_pockets);
	printf("Ice Cream: %d", ice_cream);
	printf("*jam: %d", *jam);
	printf("*kelp: %d", *kelp);
	int i = 0;
	for(i = 0; i < 4; i++){
		printf("lemon[%d] = %d \n", i, lemon[i]);
	}
	for(i = 0; i < 4; i++){
		printf("*muffins[%d] = %d \n", i, *muffins[i]);
	}
}
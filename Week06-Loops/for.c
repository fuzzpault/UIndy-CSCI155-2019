/*
    Name: Paul Talaga
    Date: Sept 30, 2019
    Desc: Simple for loop example.

*/
#include "stdio.h"

int main(){
    
    int i = 0;
    for(i = 0; i < 10; i = i + 1){
        printf("Hello World %d\n", i);
    }
    printf("i: %d\n", i);
    
    return 0;
}
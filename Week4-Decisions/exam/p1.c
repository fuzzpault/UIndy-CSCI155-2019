/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: A demonstration of ASCII characters
*/

#include "stdio.h"

int main(void){
    
    int a = 5;
    int b = 2;
    int c = 1;
    
    printf("Calc1: %d \n", a * b);
    a = a * b;
    printf("Calc2: %d \n", a - c);
    c = a / 2;
    printf("Calc3: %d \n", a * c);
    
    return 0;
}
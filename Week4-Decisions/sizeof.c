/*
    Name: Paul Talaga
    Date: Sept 16, 2019
    Desc: A demonstration of sizeof.
*/

#include "stdio.h"
#include "stdbool.h"

int main(void){
    
    char letter = 'a';
    int number = 7;
    long longernumber = 56;
    long long longernumber2 = 5656;
    char word[] = "pancakes";
    float  anotherNumber = 5.6;
    long double anotherNumber1 = 60.3;
    
    printf("char: %d\n", sizeof(letter));
    printf("int: %d\n", sizeof(number));
    printf("long: %d\n", sizeof(longernumber));
    printf("long long: %d\n", sizeof(longernumber2));
    printf("char[]: %d\n", sizeof(word));
    printf("float: %d\n", sizeof(anotherNumber));
    printf("double: %d\n", sizeof(anotherNumber1));
    
   
    return 0;
    
}
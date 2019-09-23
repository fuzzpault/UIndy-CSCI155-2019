/*
    Name: Paul Talaga
    Date: Sept 23, 2019
    Desc: Finding the smallest value of 3
*/

#include "stdio.h"


int main(void){
    
    int a = 5;
    int b = 5;
    int c = 5;
    
    // The hard part is making sure if they are the same something gets triggered.
    if( a <= b && a <= c){ // a smallest
        printf("A is smallest\n");
    }else if(b <= a && b <= c){
        printf("B is smallest\n");
    }else if(c <= a && c <= b){
        printf("C is smallest\n");
    }else{
        printf("something went wrong.  Did you have your donut yet?\n");
    }
    
   
    return 0;
    
}
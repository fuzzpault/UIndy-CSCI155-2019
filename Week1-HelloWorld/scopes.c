/*
    Name: Paul Talaga
    Date: Aug 29, 2019
    Desc: A demonstration of variables in different scopes.  
          Will it compile?
          What will be printed?
*/

#include "stdio.h"

int main(){
    int a = 5;
    {
        int a = 10;
        printf("Hello world!\n");
        {
            printf("a inner inner: %d\n", a);
        }
        printf("a inner: %d\n", a);
    }
    printf("a: %d\n", a);
    
    return 0;
}
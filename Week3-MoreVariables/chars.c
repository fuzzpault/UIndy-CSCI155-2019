/*
    Name: Paul Talaga
    Date: Sept 9, 2019
    Desc: Character arrays.
*/

#include "stdio.h"

int main(){
    
    char a = 'z';  // A single character
    char* name = "Barney";  // name is an array of characters, set to
                            // the length of Barney +1
    char anotherName[50] = "Smith"; //anotherName is an array of characters
                                    // with length 50 characters, even
                                    // though Smith doesn't take up all.
    char yetAnotherName[] = "Greg"; // yetAnotherName has length 5, which
                                    // is Greg, plus 1 for the null terminator.
    
    printf("a: -%c- \n", a);
    printf("name: %s \n", name);
    printf("name is actually %d \n", name); // What is in the name box?  The 
                // ADDRESS of where the array starts!
    printf("anotherName: %s \n", anotherName);
    printf("yetAnotherName: %s \n", yetAnotherName);
    printf("name[0]: %s \n", name[0]);  // Print the first character in the 
                                        // name array, which is a character.
        
    return 0;
}
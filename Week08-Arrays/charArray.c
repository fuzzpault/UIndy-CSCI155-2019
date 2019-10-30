/*
Char Array demonstration
Steve Spicklemire
Oct 16, 2019
*/

#include <stdio.h>

int main() {

    int bar[20] = {8, 3, 4, 5, 6, 0, 2, 3, -1};

    int theMax = bar[0];
    int theMin = bar[0];
    double theMean = 0.0;
    int sum = 0;
    int numValues = 0;
    
    int i = 0;
    
    for (i = 0; bar[i] != -1; i++ ) {
        printf("%d ", bar[i]);
        if (bar[i] > theMax ) {
            theMax = bar[i];
        }
        if (bar[i] < theMin) {
            theMin = bar[i];
        }
        sum = sum + bar[i];
        numValues = numValues + 1;
    }
    printf("\n");
    printf("The max value was %d\n", theMax);
    printf("The min value was %d\n", theMin);
    printf("The sum was %d\n", sum);
    printf("The number of values was %d\n", numValues);
    theMean = sum*1.0/numValues;
    printf("The mean was: %lf\n", theMean);

    return 0;
}

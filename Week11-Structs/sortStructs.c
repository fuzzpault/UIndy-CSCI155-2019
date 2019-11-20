#include <stdio.h>
#include <string.h>

typedef struct fruit_t {
    char name[20];
    double price;
    char taste[20];
} Fruit;

void fillFruit(Fruit *aFruit, char *name, double price, char *taste) {

    strcpy(aFruit->name, name);
    aFruit->price = price;
    strcpy(aFruit->taste, taste);
}

void printFruit(Fruit *aFruit) {
    printf("Fruit name: %s\n", aFruit->name);
    printf("Price: %lf\n", aFruit->price);
    printf("Fruit taste: %s\n", aFruit->taste);
}

void sortArrayByPrice( Fruit theFruits[], int numFruits ) {

    int i,j;
    Fruit temp;
    
    for (i=0; i<numFruits-1; i++) {
        for (j=0; j<numFruits-i-1; j++) {
            if (theFruits[j].price > theFruits[j+1].price) {
                temp = theFruits[j];
                theFruits[j] = theFruits[j+1];
                theFruits[j+1] = temp;
            }
        }
    }
}


int main() {

    Fruit fruits[4] = {};
    Fruit *myFruit = fruits;
    int sizeOfArray = 0;
    
    fillFruit(&fruits[0],"orange", 1.25, "citrus" );
    fillFruit(&fruits[1],"banana", 0.75, "yummy");
    fillFruit(&fruits[2], "cookie", 0.25, "chocolate");
    fruits[3].price = 0.0;

    for (myFruit = fruits; myFruit->price > 0.0; myFruit++) {
        printFruit(myFruit);
        sizeOfArray++;
    }
    
    sortArrayByPrice(fruits, sizeOfArray);
    
    for (myFruit = fruits; myFruit->price > 0.0; myFruit++) {
        printFruit(myFruit);
    }
}
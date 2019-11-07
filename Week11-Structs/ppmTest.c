/*
Example Struct with PPM image.
Steve Spicklemire
Nov 6, 2019
*/

#include <stdio.h>
#include <string.h>

#define MAXWIDTH  255
#define MAXHEIGHT 255

typedef struct _pixel {
    int red;
    int green;
    int blue;
} Pixel;

typedef struct _imagePPM {
    char magic[3];  // magic identifier, "P3" for PPM
    int width;      // number of columns
    int height;     // number of rows
    int max_value;  // maximum intensity of RGB components
    Pixel pixels[MAXWIDTH][MAXHEIGHT]; // the actual color pixel data
} ImagePPM;

int main() {
    
    ImagePPM myImage;
    int row = 0;
    int col = 0;
    int pixVal = 0;
    
    scanf("%s", myImage.magic);
    scanf("%d", &(myImage.width));
    scanf("%d", &(myImage.height));
    scanf("%d", &(myImage.max_value));
    
    printf("%s\n", myImage.magic);
    printf("%d %d %d\n", 
                    myImage.width, 
                    myImage.height, 
                    myImage.max_value);

    // read pixel data in from PPM file

    for (row = 0; row < myImage.width; row++) {
        for (col = 0; col < myImage.height; col++) {
            scanf("%d", &pixVal); // scan in red
            myImage.pixels[col][row].red = pixVal;
            scanf("%d", &pixVal); // scan in green
            myImage.pixels[col][row].green = pixVal;
            scanf("%d", &pixVal); // scan in blue
            myImage.pixels[col][row].blue = pixVal;
        }
    }
    
    // Now write only the "red" data out

    for (row = 0; row < myImage.width; row++) {
        for (col = 0; col < myImage.height; col++) {
            printf("%d\n",myImage.pixels[col][row].red);
            printf("0\n0\n");
        }
    }
        return 0;
}

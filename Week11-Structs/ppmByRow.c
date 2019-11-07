/*
Example Struct with PPM image.
Process an image row by row
Steve Spicklemire
Nov 7, 2019
*/

#include <stdio.h>
#include <string.h>

#define MAXWIDTH  3000 // make a reasonable size for MAXWIDTH

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
    Pixel pixels[MAXWIDTH]; // the actual color pixel data for only one row of the image
} ImagePPM;

int main() {
    
    ImagePPM myImage;
    int row = 0;
    int col = 0;

    scanf("%s", myImage.magic);
    scanf("%d", &(myImage.width));
    scanf("%d", &(myImage.height));
    scanf("%d", &(myImage.max_value));
    
    printf("%s\n", myImage.magic);
    printf("%d %d %d\n", 
                    myImage.width, 
                    myImage.height, 
                    myImage.max_value);

    // read one row pixel data in from PPM file

    for (row = 0; row < myImage.height; row++) {
        // now read in only one row of the image data.
        for (col = 0; col < myImage.width; col++) {
            scanf("%d", &(myImage.pixels[col].red)); // scan in red
            scanf("%d", &(myImage.pixels[col].green)); // scan in green
            scanf("%d", &(myImage.pixels[col].blue)); // scan in blue
        }

        // We now have a full row, we can do anything that only requires 
        // using the data from that row. Let's reverse the image left to right
        
        for (col = myImage.width-1; col >= 0; col--) {
            printf("%d ",myImage.pixels[col].red);
            printf("%d ",myImage.pixels[col].green);
            printf("%d ",myImage.pixels[col].blue);
        }
        printf("\n");
    }

    return 0;
}

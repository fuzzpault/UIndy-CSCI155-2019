/*
Example Struct with PPM image, mod to use malloc
Steve Spicklemire
Nov 25, 2019
*/

#include <stdio.h>
#include <string.h>

#include <stdlib.h>

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
    Pixel *pixels;  // the actual color pixel data 
} ImagePPM;

int scanImage(ImagePPM *anImage) {
    /*
    ** Scan an image in.
    ** return 1 if successful, 0 if failure
    */

    int row = 0;
    int col = 0;
    int pixVal = 0;
    
    scanf("%s", anImage->magic);
    scanf("%d", &(anImage->width));
    scanf("%d", &(anImage->height));
    scanf("%d", &(anImage->max_value));
    
    // now allocate an array large enough to hold the pixel data for this image.
    
    anImage->pixels = (Pixel *)malloc(sizeof(Pixel)*anImage->width*anImage->height);
    
    if (anImage->pixels == NULL) {
        // Ack! We failed.
        return 0;
    }
    
    Pixel *p = anImage->pixels;
    
    for (row = 0; row < anImage->height; row++) {
        for (col = 0; col < anImage->width; col++) {
            scanf("%d", &pixVal); // scan in red
            p->red = pixVal;            
            scanf("%d", &pixVal); // scan in green
            p->green = pixVal;
            scanf("%d", &pixVal); // scan in blue
            p->blue = pixVal;
            p++;
        }
    }
    return 1;
}

double luminosity(Pixel *p) {
    return 0.2126*p->red + 0.7152*p->green + 0.0722*p->blue;
}

double findMaxLuminosity(ImagePPM *anImage){

    Pixel *p = anImage->pixels;
    int row = 0;
    int col = 0;
    double maxLum = luminosity(p);

    for (row = 0; row < anImage->height; row++) {
        for (col = 0; col < anImage->width; col++) {
            if (luminosity(p)>maxLum) {
                maxLum = luminosity(p);
            }
            p++;
        }
    }
    return maxLum;
}

int main() {
    
    ImagePPM myImage; // alloc an image structure on the stack with no pixels

    if (scanImage(&myImage) == 0) {
        printf("Ack! failure.\n");
        return -1;
    }

    printf("Max luminosity is %6.2lf\n", findMaxLuminosity(&myImage));
    
    free(myImage.pixels);
    myImage.pixels = NULL;

    return 0;
}

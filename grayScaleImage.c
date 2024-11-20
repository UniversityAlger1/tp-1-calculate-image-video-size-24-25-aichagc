#include "config/grayScaleImage.h"

// Parameters:
//   w: width of the image
//   h: height of the image

// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
    // YOUR CODE HERE - BEGIN
    float size_bitmap = w * h; 
    // the rule is h*w*8 but since we are looking for the Bytes value, 
    // then the 8 is removed since we were about to divide in 8 anyway 
    return size_bitmap; 
    // YOUR CODE HERE - END
}

/* 
int main (){ 
    int w, h; 
    printf("enter w \n"); 
    scanf("%d", &w); 
    printf("enter h \n"); 
    scanf("%d", &h); 
    printf("The result in Bytes is %f", grayScaleImage(w, h)); 
} 
*/


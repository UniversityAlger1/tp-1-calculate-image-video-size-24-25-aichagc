#include <string.h>
#include "config/coloredBitmap.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits

// Return value
//   colored image size Bitmap (based on the unit passed parameter)
float coloredBitmap(int w, int h, char* unit) {
    // YOUR CODE HERE - BEGIN
    float size_colored = w * h * 24; // 8 bits for each color channel, R G B
    
    if (strcmp(unit, "bt") == 0) {
        return size_colored;
    } 
    else if (strcmp(unit, "ko") == 0) {
        return (size_colored / 8) / 1024;
    } 
    else if (strcmp(unit, "mo") == 0) {
        return ((size_colored / 8) / 1024) / 1024;
    } 
    else if (strcmp(unit, "go") == 0) {
        return (((size_colored / 8) / 1024) / 1024) / 1024;
    } 
    else {
        printf("Invalid unit specified.\n");
        return 0;
    }
    // YOUR CODE HERE - END
}

/* 
int main () { 
    int w, h; 
    char unit[5]; 
    
    printf("enter w \n"); 
    scanf("%d", &w); 
    printf("enter h \n"); 
    scanf("%d", &h); 
    printf("enter unit \n"); 
    scanf("%s", unit); 
    
    printf("The result in %s is %f", unit, coloredBitmap(w, h, unit)); 
} 
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"

int main() {
    float x = 0 ,  z;
    long y = 1;

    for (int k = 1; k<=25; k++ ) {
        x += function25variant(k);
    }
    for (int k = 1; k<=25; k++ ) {
        y *= function1variant(k);
    }
        
    z = 4 * (y*x - y);   
    printf("x = %f \n y = %li \n z = %f", x, y, z);

    return 0;
}


    
    
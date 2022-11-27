#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include "../fun.h"


int main() {
    float a = 1, summa = 0;
    for (int k = 1; a > 0.001; k++) {
        a = function2variant(k) / k;
        summa += a;
    }
    printf("%f  %f", summa, a); 
    return 0;
}
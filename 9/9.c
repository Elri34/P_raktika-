#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"


int main() {
    float y, plusMax = 0, plusMaxYear, sum = 0;
    for (int k = 1991; k <= 2001; k++) {
        y = 100 * function5variant(k);
        printf("%f\n", y);

        if (((y < -330)&&(y > -590))) {
            sum += abs(y);
        }
        else if (y > plusMax) {
            plusMax = y;
            plusMaxYear = k;

        }
    }

    printf("Сума збиткiв вiд -330 до -590: %f\n", sum);
    printf("Найбiльший прибуток фiрми був у %i роцi, i становив %f", (int)plusMaxYear, plusMax);

    return 0;
}
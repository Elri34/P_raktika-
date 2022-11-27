#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"


int main() {
    float y[7], positive[7] = {0, 0, 0, 0, 0, 0, 0}, negative[7] = {0, 0, 0, 0, 0, 0, 0};
    int negativeIndex = 0, positiveIndex = 0;
    for (int k = 1; k <= 7; k++) {
        y[k] = function6variant(k);
        printf("%f\n", y[k]);
    }

    for (int i = 1; i <= sizeof(y) / sizeof(float); i++) {
        if (y[i] < 0) {
            negative[negativeIndex] = y[i];
            negativeIndex++;
        }
        else if (y[i] > 0) {
            positive[positiveIndex] = y[i];
            positiveIndex++;
        }
    }

    printf("Сума другого позитивного і третьго негативного елементів: %f\n", positive[2] + negative[3]);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"


int main() {
    int i = 20, k = 0;
    float h = 0.1 * i, sum;

    printf("浜様様様様様曜様様様様様様?\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("? %10f ? %10f ?\n", arg, function4variant(arg));

        if (function4variant(arg) > 0) {
            k++;
            sum += pow(function4variant(arg), 3);
        }
    }

    printf("麺様様様様様擁様様様様様様?\n");
    printf("? ?i?讓i痰? %13i ?\n", k);
    printf("? ?祠? %18f ?\n", sum);
    printf("藩様様様様様様様様様様様様?\n");

    return 0;
}
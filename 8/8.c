#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"


int main() {
    int i = 20, k = 0;
    float h = 0.1 * i, sum;

    printf("ษออออออออออออหออออออออออออป\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("บ %10f บ %10f บ\n", arg, function4variant(arg));

        if (function4variant(arg) > 0) {
            k++;
            sum += pow(function4variant(arg), 3);
        }
    }

    printf("ฬออออออออออออสออออออออออออน\n");
    printf("บ iซ์ชiแโ์ %13i บ\n", k);
    printf("บ ‘ใฌ  %18f บ\n", sum);
    printf("ศอออออออออออออออออออออออออผ\n");

    return 0;
}
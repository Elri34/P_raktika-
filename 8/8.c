#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../fun.h"


int main() {
    int i = 20, k = 0;
    float h = 0.1 * i, sum;

    printf("�������������������������ͻ\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("� %10f � %10f �\n", arg, function4variant(arg));

        if (function4variant(arg) > 0) {
            k++;
            sum += pow(function4variant(arg), 3);
        }
    }

    printf("�������������������������͹\n");
    printf("� �i��i��� %13i �\n", k);
    printf("� �㬠 %18f �\n", sum);
    printf("�������������������������ͼ\n");

    return 0;
}
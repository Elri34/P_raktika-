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

    printf("�㬠 ����i� �i� -330 �� -590: %f\n", sum);
    printf("����i��訩 �ਡ�⮪ �iନ �� � %i ��i, i �⠭���� %f", (int)plusMaxYear, plusMax);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../fun.h"

int main(){
    char choice;
    float y, taxes, i = 10;
    printf("����i�� ⨯ ��������� ஡�� (�, �, �)\n");
    scanf ("%c", &choice);
    if (choice == 'A') {
        y = 100 * fabs(function22variant(i) + 50);
        taxes + y * 0.1;
    }
    else if (choice == 'B') {
        y = 150 * fabs(function23variant(i) + 100);
        taxes = y * 0.15;
    }
    else if (choice == 'C') {
        y = 200 * fabs(function24variant(i) + 135);
        taxes = y * 0.2;
    }

    printf("���客���: %f\n",y);
    printf("����⪨: %f\n", taxes);
    printf("�� �����i: %f\n", y - taxes);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include "../fun.h"

int main() {
    float a = 1, summa = 0, x;
    int step;
    printf("����i�� � (0;1)\n");
    scanf("%f", &x);
    
    while (x < 0 || x > 1) {
        printf("� �� � i��ࢠ�i (0;1)\n");
        scanf("%f", &x);
    }
    for (int k = 1; a > 0.001; k++)  {
        a = pow(-1, k) * ((function2variant(k) * pow(x,k)) / factorial(k));
        printf("%f/n" , a);
        summa *=a;
        step = k;
    }
   printf("�㬬� �i�� ���i�������i: %f /n 蠣i� ��� ������� �筮��i 0.001: %i\n", summa, step);
   return 0;
    
}
     
    

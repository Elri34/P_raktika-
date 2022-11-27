#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../fun.h"


int main(){

    float x = 10, a =15 , b =20 , c =25 , d =30 , e = 2.71828, i =20 , y;

    printf("Enter x, a, b, c, d\n");
    scanf("%f", &x, &a, &b, &c, &d);

    if (abs(x) < 10) {
        float fi = tan(x + a) - log(fabs(b + 7))/log(i);
        y = function22variant(fi);
    }
    else if(abs(x) >=10) {
        float omega = c * pow((pow(x, 2) + (d * pow(e, 1.3))), 1/5);
        y = function23variant(omega);
    }
    printf("%f", y);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include "../fun.h"
int main() {
    double h = 20, r = 8, pi = 3.1415, l, s, v;
    l = sqrt(pow(h,2)) + pow(r,2);
    s = 2 * pi * r * l;
    v = (pi * pow(r,2) * h);

    printf("Side surface area %f\n" , s);
    printf("Amount %f\n", v);

    return 0;
}
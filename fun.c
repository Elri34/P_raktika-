#include "fun.h"
#include <math.h>
#include <stdlib.h>

float function22variant(float x) {
    float f = 2* sin(fabs(2*x))*cos(2*x) - 11.6 * sin(x/(0,4-1));
    return f;
}

float function23variant(float x) {
    float f = sin(fabs(x))/0.1 + (9.4 * sin(3*x-2.5));
    return f;
}

float function24variant(float x) {
    float f = 10.8 * fabs(x)/0.1 + 9.4 * sin(3*x - 2.5);
    return f;
}

float function25variant(float x) {
     float f = (11.2 * cos(2 * x-1)) + fabs(sin( 1.5 * x))/1.7;
     return f;

}

float function1variant(float x) {
    float f = (9.2 * cos(pow(x, 2)) - fabs(sin(x) / 1.1));
    return f;
}
float function2variant(float x) {
    float f = (12.4 * sin(fabs(x / 2.1))) - (8.3 * cos(1.2 * x));
    return f;
}
float factorial(float x)  {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f*=i;
    }
 return f;
}

float function4variant(float x) {
    float f = fabs(sin(x) / 3.12 + cos(pow(x, 2))) - (8.3 * sin(3 * x));
    return f;
}
float function5variant(float x) {
    float f = cos(fabs(2 * x)) / 1.12 - cos((3 * x) - 2) + 6.15;
    return f;
}

float function6variant(float x) {
    float f = sin(x) * cos(pow(x, 2)) * sin(x + 1.4) + 5.14;
    return f;
}
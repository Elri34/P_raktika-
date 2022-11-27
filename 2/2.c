#include <stdio.h>
#include <math.h>

int main() {
    float A,ax=0,ay=0,B,bx=20,by=19,C,cx=-20,cy=21,AB,BC,AC;
    AB=(sqrt(pow((bx-ax),2)+pow((by-ay),2)));
    BC=(sqrt(pow((cx-bx),2)+pow((cy-by),2)));
    AC=(sqrt(pow((cx-ax),2)+pow((cy-ay),2)));
   
printf("AB %f\n", AB);
printf("BC %f\n", BC);
printf("AC %f\n", AC);

    float M;
    M=0.5 * sqrt(2 * pow(AB, 2) + 2 * pow(BC, 2) - AC * AC);

printf("M %f\n", M); 

    float p;
    p=((AB+BC+AC)/2);

    float R;
    R=(AB*BC*AC) / (4*(sqrt(p*(p-AB)*(p-BC)*(p-AC))));

printf("R %f\n", R); 

    

  return 0;
   
}
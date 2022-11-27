#include <stdio.h>

int main(){ 
    int tableRows;
    float value, valueChange, foots, metres, inches;

    printf("Enter the number of rows in the table,Initial value and change step\n");
    scanf("%i %f %f" , &tableRows, &value, &valueChange);

    printf("ษอออออออออออออออออออออออออออหออออออออออออออออออออออออออออหออออออออออออออออออออออออออออป \n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        foots = value, metres = value * 0.3048, inches = value * 12;

        printf("บ%20f foots บ%20f metres บ%20f inches บ \n", foots, metres, inches);
    }
    printf("ศอออออออออออออออออออออออออออสออออออออออออออออออออออออออออสออออออออออออออออออออออออออออผ\n");

    return 0;
}
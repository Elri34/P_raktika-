#include <stdio.h>

int main(){ 
    int tableRows;
    float value, valueChange, foots, metres, inches;

    printf("Enter the number of rows in the table,Initial value and change step\n");
    scanf("%i %f %f" , &tableRows, &value, &valueChange);

    printf("浜様様様様様様様様様様様様様僕様様様様様様様様様様様様様曜様様様様様様様様様様様様様様� \n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        foots = value, metres = value * 0.3048, inches = value * 12;

        printf("�%20f foots �%20f metres �%20f inches � \n", foots, metres, inches);
    }
    printf("藩様様様様様様様様様様様様様瞥様様様様様様様様様様様様様擁様様様様様様様様様様様様様様�\n");

    return 0;
}
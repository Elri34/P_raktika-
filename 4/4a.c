#include <stdio.h>

int main()
{
    printf( "Введiть номер потяга\n" );
    printf( "1. Потяг 248-а\n" );
    printf( "2. Потяг 574-п\n" );
    printf( "3. Потяг 666-г\n" );
    printf( "4. Вихiд\n" );
    printf( "Ваш выбор: " );
    int input;
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            
            printf("Час вiдправлiння 21:10 \n");
            break;
        case 2:
            printf("Час вiдправлiння 18:30\n");
            break;
        case 3:
            printf("Час вiдправлiння 10:50\n");
            break;
        case 4:
            printf( "Ви обрали вихiд :(\n" );
            break;
        default:
            printf( "Такого потяга не iснує\n" );
    }
    getchar();
    return 0;
}
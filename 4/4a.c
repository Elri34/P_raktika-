#include <stdio.h>

int main()
{
    printf( "����i�� ����� ���\n" );
    printf( "1. ���� 248-�\n" );
    printf( "2. ���� 574-�\n" );
    printf( "3. ���� 666-�\n" );
    printf( "4. ���i�\n" );
    printf( "��� �롮�: " );
    int input;
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            
            printf("��� �i��ࠢ�i��� 21:10 \n");
            break;
        case 2:
            printf("��� �i��ࠢ�i��� 18:30\n");
            break;
        case 3:
            printf("��� �i��ࠢ�i��� 10:50\n");
            break;
        case 4:
            printf( "�� ��ࠫ� ���i� :(\n" );
            break;
        default:
            printf( "������ ��� �� i���\n" );
    }
    getchar();
    return 0;
}
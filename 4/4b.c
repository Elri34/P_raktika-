#include <stdio.h>
int main() {
  int key;  
  printf("����i�� ����� ���, 1,2,3 ");
  scanf("%i", &key);   
  if (key == 1) {
      printf("��� �i��ࠢ�i��� 21:10 \n "); 
  }     
    else if (key == 2) {
      printf("\n ��� �i��ࠢ�i��� 18:30"); 
  }
  
    else if (key == 3) {
      printf("\n ��� �i��ࠢ�i��� 10:50"); 
    } 
    else {
      printf("\n ������ ��� �� i���"); 
  }              
  
  
return 0;

}
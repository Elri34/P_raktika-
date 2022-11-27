#include <stdio.h>
int main() {
  int key;  
  printf("Введiть номер потяга, 1,2,3 ");
  scanf("%i", &key);   
  if (key == 1) {
      printf("Час вiдправлiння 21:10 \n "); 
  }     
    else if (key == 2) {
      printf("\n Час вiдправлiння 18:30"); 
  }
  
    else if (key == 3) {
      printf("\n Час вiдправлiння 10:50"); 
    } 
    else {
      printf("\n Такого потяга не iснує"); 
  }              
  
  
return 0;

}
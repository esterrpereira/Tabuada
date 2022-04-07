#include <stdio.h>

int main(void) {
  int num, i, mult; // i = condição
  printf("Digite um número: ");
  scanf("%d", &num);

  for (i=0; i<=10;i++){
    mult= num * i;
    printf("%d X %d = %d \n", num,i, mult);

    
  }


  
  return 0;
}
// Exercício 01 
// Informar se um número é positivo, negativo ou nulo. 


#include <stdio.h> 

int main(){

  float num;

  printf("Digite o número desejado: ");
  scanf("%f", &num);

  if (num > 0 ){
    printf("O número é positivo");
  } else if (num == 0) {
    printf("O número é nulo");
  } else {
    printf("O número é negativo");
  }

  return 0;

}
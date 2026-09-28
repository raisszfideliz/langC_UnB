// Exercício 3 
// Informe se um número é par ou ímpar 

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    // O operador % retorna o resto da divisão de um número por outro.

    if (num % 2 == 0){
      printf("O número é par.");
    } else {
        printf("O número é ímpar.");
    }

    return 0;
}
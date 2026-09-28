//Exercício 2 
// Maior de dois números 

#include <stdio.h> 

int main(){

    float num1, num2;

    printf("Digite o 1° número: ");
    scanf("%f", &num1);

    printf("Digite o 2° número: ");
    scanf("%f", &num2);

    if (num1 > num2){
        printf("O 1° número é maior que o 2° número ");
    } else if (num1 == num2){
        printf("Os números são iguais");
    } else {
        printf("O 2° número é maior que o 1° número ");
    }

    return 0;

}
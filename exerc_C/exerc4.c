// Exercício 4
/* Aprovação

Leia a nota de um aluno.

Nota ≥ 6 → "Aprovado"
Nota entre 4 e 5.9 → "Recuperação"
Nota < 4 → "Reprovado"*/

#include <stdio.h>

int main(){

   float nota;

   printf("Digite a nota do aluno(a): ");
   scanf("%f", &nota);

   if (nota >= 6.0){
    printf("Aprovado.");
   } else if (nota >= 4 && nota < 5.9){
    printf("Recuperação. ");
   } else {
    printf("Reprovado.");
   }

   return 0;
}
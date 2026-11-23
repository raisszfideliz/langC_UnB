#include <stdio.h> // biblioteca para o scanf 
#include <string.h> // biblioteca para o strlen 

int main(){ //função principal 

   char palavrasecreta[20]; // array com 20 posições para guardar a palavra secreta 
   char chutes[26]; // array para armazenar os chutes do usuário 
   int tentativas = 0; 
   sprintf(palavrasecreta, "MELANCIA");

   int acertou = 0;
   int enforcou = 0;

   do{
     
    char chute;

    printf("Qual letra? ");
    scanf(" %c", &chute); //" %c " para o programa não considerar o Enter 

    chutes[tentativas] = chute;
    tentativas++; 


    for(int i=0; i <strlen(palavrasecreta); i++){
        if(palavrasecreta[i] == chute){
            printf("A posição %d tem essa letra\n", i+1);

        }
    }

   }while(!acertou && !enforcou);


}
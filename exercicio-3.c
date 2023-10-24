#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*Crie um programa que solicite ao usuário que adivinhe um
número entre 1 e 100 e dê dicas para aproximar o palpite,
permitindo um número máximo de tentativas.*/
int main(){
    srand(time(NULL));

    int adivinhe, i = 0, numeroAleatorio = rand() % 100 + 1;
    do{
        printf("adivinhe o numero de 1 a 100: \n");
         scanf("%i", &adivinhe);
    if (adivinhe > numeroAleatorio)
    {
        printf("o numero e menor que o digitado\n");
    }else if(adivinhe < numeroAleatorio)
    {
        printf("o numero e maior que o digitado\n");
    }
         i++;
      
    }while (adivinhe != numeroAleatorio);

     printf("parabens, voce acertou!!\n", numeroAleatorio);
     printf("numero de tentativas: %i", i);

}

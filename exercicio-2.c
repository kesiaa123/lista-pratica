#include <stdio.h>
#include <math.h>
/*Contagem Regressiva: Crie um loop que conte de um número
fornecido pelo usuário até 1 e exiba os números na tela.*/

int main(){
    int num;

     printf("digite um numero inteiro positivo: ");
        scanf("%i", &num);
    do{

    num --;
    printf("%i\n", num);

    }while (num != 0);
}

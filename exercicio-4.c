#include <stdio.h>
#include <math.h>
/*Fatorial: Peça ao usuário que insira um número inteiro não
negativo e use um loop do-while para calcular o fatorial desse
número.*/
int main(){

    int numero, fatorial = 1, i = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%i", &numero);

    do{
        fatorial *= i;
        i++;

    }while (i <= numero);
    printf("fatorial = %i", fatorial);

}

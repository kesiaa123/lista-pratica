#include <stdio.h>
#include <math.h>
/*Crie um programa que determine a estação do ano com base
no mês, permitindo que o usuário insira o mês.*/

int main(){
    int estacao;

    do{
    printf("digite um numero de 1 a 12 representando o mes\npara determinar sua estacao, ou 13 para sair: \n");
    scanf("%i", &estacao);
    
    switch(estacao){
        case 1:
        printf("A estacao de janeiro = verao!\n");
        break;
        case 2:
        printf("A estacao de fevereiro = verao!\n");
        break;
        case 3:
        printf("A estacao de marco = verao!\n");
        break;
        case 4:
        printf("A estacao de abril = outono!\n");
         break;
        case 5:
        printf("A estacao de maio = outono!\n");
         break;
        case 6:
        printf("A estacao de junho = outono\n");
         break;
        case 7:
        printf("A estacao de julho = inverno!\n");
         break;
        case 8:
        printf("A estacao de agosto = inverno!\n");
         break;
        case 9:
        printf("A estacao de setembro = inverno!\n");
         break;
        case 10:
        printf("A estacao de outubro = primavera!\n");
         break;
        case 11:
        printf("A estacao de novembro = primavera!\n");
         break;
        case 12:
        printf("A estacao de dezembro = primavera!\n");
         break;
    }
    }while(estacao <= 12);
    
    printf("progama encerrado!");

}

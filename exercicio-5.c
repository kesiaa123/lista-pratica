#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int ano, b, i = 0;

    do{
        printf("digite um ano: ");
        scanf("%i", &ano);
        b = ano % 4;
        
        if(b == 0){
        printf("este ano é bissexto!");
        break;
        }
        else{
        printf("não é bissexto!\n");
        }
        i++;
    }while(b != 0);
     
}

#include <stdio.h>

int fatorial(int);

int main(){
    int numero; 

    printf("Escreva um numero:  ");
    scanf("%d",&numero);

    printf("O fatorial de %d seria: %d", numero, fatorial(numero));
    return 0;
}

int fatorial(int numero){
    int resultado = 1;

    for(int i=1; i<=numero; i++){
        resultado = resultado * i;
    }

    return resultado;
}
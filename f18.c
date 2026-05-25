#include <stdio.h>

int somador(int);

int main(){
    int x; 

    printf("Escreva um numero x:  \n");
    scanf("%d",&x);

    printf("A soma de todos os números entre 1 e %d é:  %d", x, somador(x));

    return 0;
}

int somador(int numero){
    int total = 1;
    for(int i=2; i<=numero; i++){
        total = total + i;
    }
    return total;
}



#include <stdio.h>

void fibonacci(int);

int main(){
    int numero;
    printf("O quão grande você quer a escala fibonacci?:  ");
    scanf("%d",&numero);

    fibonacci(numero);

    return 0;
}

void fibonacci(int numero){
    int v[numero], valor = 0;

    if(numero == 0){
    printf("O valor de fibonacci seria %d", 0);
    } else if (numero == 1){
    printf("O valor de fibonacci seria %d", 01);
    }

    v[0] = 0;
    v[1] = 1;
    printf("O valor de fibonacci seria: 01");
    for(int i=2; i<numero; i++){
        v[i]= v[i - 2] + v[i - 1];
        printf("%d", v[i]);
    }
}
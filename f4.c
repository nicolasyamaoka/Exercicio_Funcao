#include <stdio.h>

int inverter(int);
int contador(int);


int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int vetor[contador(numero)];
    int tamanho = contador(numero);

    for(int i=0; i<tamanho; i++){
        vetor[i] = inverter(numero);
        numero = numero/10;
        printf("o vetor[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}

int contador(int x){
    int cont=0;
    while(x>0){
        x = x/10;
        cont++;
    }
    return cont;
}

int inverter(int x){
    return x % 10;
}
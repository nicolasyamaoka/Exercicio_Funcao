#include <stdio.h>

float produto(int x, int y);
float quociente(int x, int y);
float potencia(int x, int y);

int main() {
    int n1, n2;
    float prod, quoci, poten;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    prod = produto(n1, n2);
    quoci = quociente(n1, n2);
    poten = potencia(n1, n2);

    printf("O produto é %.2f, o quociente é %.2f e a potencia é %.2f\n",
           prod, quoci, poten);

    return 0;
}

float produto(int x, int y) {
    float soma = 0;

    for(int i = 0; i < y; i++) {
        soma = soma + x;
    }

    return soma;
}

float quociente(int x, int y) {
    float cont = 0;

    if(y == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }

    while(x >= y) {
        x -= y;
        cont++;
    }

    return cont;
}

float potencia(int x, int y) {
    float multiplicacao = 1;

    for(int i = 0; i < y; i++) {
        multiplicacao = multiplicacao * x;
    }

    return multiplicacao;
}
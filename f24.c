#include <stdio.h>

int fatoração(int);
int combinação(int, int);

int main(){
    int n, r; 

    printf("Escreva um numero n:  \n");
    scanf("%d",&n);
    printf("Escreva um numero r:  \n");
    scanf("%d",&r);

    printf("A combinação de %d no grupo %d é: %d", r, n, combinação(n,r));

    return 0;
}

int combinação(int n, int r){
    return fatoração(n) / (fatoração(r) * fatoração(n - r));
}


int fatoração(int numero){
    int valor = 1;
    for(int i=2; i<=numero; i++){
        valor = valor * i;
    }
}
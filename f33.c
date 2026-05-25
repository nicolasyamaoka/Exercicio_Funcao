#include <stdio.h>

int divididor(int, int);
int imprimeMDC(int [], int);

int main(){
    int n;
    printf("Escreva o tamanho do vetor: ");
    scanf("%d",&n);

    int vet[n];
    for(int i=0; i<n; i++){
        printf("Escreva V[%d]: ", i);
        scanf("%d",&vet[i]);
    }

    imprimeMDC(vet, n);

    return 0;
}

imprimeMDC(int vet[], int tamanho){
    int MDC[20], k, cont;
    for(int i=0; i<tamanho; i++){
        cont = 0;
        for(int j=1; j<20; j++){
            if(divididor(vet[i], j)){
                MDC[cont++] = j;
            }
        }
        printf("Os divisores de %d são: \n", vet[i]);
        for(int a=0; a<cont; a++){
            printf("%d ,",MDC[a]);
        }
        printf("\n");

    }
}

int divididor(int dividido, int divisor){
    if(dividido % divisor==0){
        return 1;
    } else {
        return 0;
    }
}
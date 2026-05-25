#include <stdio.h>

void binário(int);

int main(){
    int x; 

    printf("Escreva um numero x:  \n");
    scanf("%d",&x);
    
    binário(x);

    return 0;
}

void binário(int numero){
    int cont = 0, v[50], copia=numero;

    while(copia > 0){
        v[cont++] = copia%2;
        copia = copia/2;
    }

    printf("o número binário de %d é: ",numero);
    for(int i = cont - 1; i>=0; i--){
        printf("%d",v[i]);
    }
}



#include <stdio.h>

int divisor(int);
void ImprimidorVetor(int v[], int);

int main(){
    int x, y; 

    printf("Escreva um numero x:  \n");
    scanf("%d",&x);
    printf("Escreva um numero y, sendo ele maior que x:  ");
    scanf("%d",&y);

    int vetor[y - x - 1], cont=0;
    for(int i=x + 1; i<y; i++){
        vetor[cont++] = i;
    }

    ImprimidorVetor(vetor, cont);

    return 0;
}

void ImprimidorVetor(int vetor[], int tamanhoV){
    for(int i=0; i<tamanhoV; i++){
        if(divisor(vetor[i])){
            printf("O numero %d da resto 5 ao ser dividido por 13\n", vetor[i]);
        }
    }
}


int divisor(int numero){
    
    if(numero%13 != 5){
        return 0;
    }  
    return 1;
}
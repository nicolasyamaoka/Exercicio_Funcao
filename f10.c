#include <stdio.h>

int primo(int);
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
        if(primo(vetor[i])){
            printf("O numero %d é primo", vetor[i]);
        }
    }
}


int primo(int numero){
    
    if(numero == 1){
        return 0;
    }
    for(int i=2; i<numero; i++){
        if(numero%i == 0){
            return 0;
        } 
    }
    
    return 1;
}
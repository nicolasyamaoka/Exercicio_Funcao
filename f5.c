#include <stdio.h>

int primo(int);

int main(){
    int numero; 

    printf("Escreva um numero:  ");
    scanf("%d",&numero);

    if(primo(numero)){
        printf("numero primo");
    } else {
        printf("nao e um numero primo");
    }

    return 0;
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
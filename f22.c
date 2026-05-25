#include <stdio.h>

int menorQ(int);

int main(){
    int x; 

    printf("Escreva um numero x:  \n");
    scanf("%d",&x);
    
    printf("O menor quadrado maior que %d e o: %d", x, menorQ(x));

    return 0;
}

int menorQ(int numero){
    for(int i = 0; i<=numero + 1; i++){
        if(i * i > numero){
            return i;
        }
    }
}



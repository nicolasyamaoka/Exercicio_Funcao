#include <stdio.h>

int Imprimidor(int, int, int);

int main(){
    int x, y, z; 

    printf("Escreva um numero x:  \n");
    scanf("%d",&x);
    printf("Escreva um numero y:  \n");
    scanf("%d",&y);
    printf("Escreva um numero z:  \n");
    scanf("%d",&z);

    int vetor[y - x - 1], cont=0;
    for(int i=x + 1; i<y; i++){
        vetor[cont++] = i;
    }

    Imprimidor(x, y, z);

    return 0;
}

int Imprimidor(int x, int y, int z){

    if(x + y > z && x + z > y && z + y > x){

        if(x == y && x == z){
            printf("Triangulo Equilátero");
            return 1;

        } else if(x != y && x == z || y != z && y == x){
            printf("Triangulo isóceles");
            return 2;

        } else if(x != y && x != z){
            printf("Triangulo escaleno");
            return 3;
        }
    } else {
        printf("Não é um trangulo");
        return 0;
    }
}


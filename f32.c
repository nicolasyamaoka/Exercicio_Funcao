#include <stdio.h>

void ImprimidorTemperatura();

int main(){
    ImprimidorTemperatura();

    return 0;
}

void ImprimidorTemperatura(){
    int C, F;

    printf("Tabela Celcius e Farenheit:\n");
    printf("---------------------------\n");
    printf("Farenheit   ----->  Celcius\n");

    for(int i=50; i<=150; i++){
        F = i;
        C = (5 * (i - 32)) / 9;
        printf("    %d      ----->    %d   \n", F, C);
    }
}


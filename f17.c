#include <stdio.h>

void importador(int);
const char* romano(int, int);

int main() {

    int numero;

    printf("Escreva um numero: ");
    scanf("%d", &numero);

    importador(numero);

    return 0;
}

void importador(int num){

    int cont = 0, copia;

    copia = num;

    while(copia > 0){
        copia = copia / 10;
        cont++;
    }

    copia = num;

    int vet[cont];

    for(int i = 0; i < cont; i++){
        vet[i] = copia % 10;
        copia = copia / 10;
    }

    printf("O número em romanos seria: ");

    for(int i = cont - 1; i >= 0; i--){
        printf("%s", romano(vet[i], i + 1));
    }
}

const char* romano(int num, int casaDecimal){

    const char *tabela[4][10] = {

        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},

        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},

        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},

        {"", "M", "MM", "MMM", "", "", "", "", "", ""}
    };

    return tabela[casaDecimal - 1][num];
}
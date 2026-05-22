#include <stdio.h>
#include <string.h>

int palindromo(char v[]);


int main() {
    char texto[200];
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';

    if(palindromo(texto)){
        printf("e um palindromo");
    } else {
        printf("nao e um palidromo");
    }

    return 0;
}

int palindromo(char texto[]){
    char contrario[strlen(texto) + 1];

    for(int i=0; i<strlen(texto); i++){
        contrario[i] = texto[strlen(texto) - 1 - i];  
    }

    contrario[strlen(texto)] = '\0';


    return strcmp(texto, contrario) == 0;
}

#include <stdio.h>
#include <string.h>

int strlen2(char s[]);
int strcmp2(char s[], char s2[]);
void strcat2(char s[], char s2[]);


int main() {
    char texto[200], texto2[200];

    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';

    fgets(texto2, sizeof(texto2), stdin);
    texto2[strlen(texto2) - 1] = '\0';


    printf("strlen original: %d\n",strlen(texto));
    printf("strlen inventado: %d\n\n",strlen2(texto));

    printf("strcmp original: %d\n",strcmp(texto, texto2));
    printf("strcmp inventado: %d\n\n",strcmp2(texto, texto2));

    strcat2(texto, texto2);

    return 0;
}

int strlen2(char texto[]){
    int i = 0;
    while(texto[i] != '\0'){
        i++;
    }
    return i;
}

int strcmp2(char texto[], char texto2[]){
    for(int i = 0; i<strlen(texto); i++){
        if (texto[i] > texto2[i]){
            return 1;
        } else if (texto[i] < texto2[i]){
            return -1;
        }
    }
    return 0;
}

void strcat2(char destino[], char origem[]) {
    int i = strlen(destino), j = 0;

    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }

    destino[i] = '\0';

    printf("%s", destino);
}
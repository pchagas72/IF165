#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char nomes[5][51];
    char faltas[5];

    for (int i = 0;i <= 4;i++) {
        char nome[50];
        char falta;
        scanf("%s", nome);
        while ((getchar()) != '\n');
        falta = tolower(getchar());
        strcpy(nomes[i], nome);
        faltas[i] = falta;
    }

    for (int k = 0; k <= 4;k++) {
        printf("%s - ", nomes[k]);
        if ((int)faltas[k] == (int)'p'){
            printf("Presente\n");
            continue;
        }
        printf("Faltou\n");

    }

    return 0;
}

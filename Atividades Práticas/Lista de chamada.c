#include <stdio.h>
#include <string.h>

void recebeEntry(){
    char nome[50];
    char falta;
    scanf("%s", nome);
    while ((getchar()) != '\n');
    falta = getchar();
    printf("%s %c", nome, falta);
}

int main(){

    char nomes[5][51];
    char faltas[5];

    for (int i = 0;i <= 4;i++) {
        char nome[50];
        char falta;
        scanf("%s", nome);
        while ((getchar()) != '\n');
        falta = getchar();
        strcpy(nomes[i], nome);
        faltas[i] = falta;
    }

    for (int k = 0; k <= 4;k++) {
        printf("%s - ", nomes[k]);
        if (
            (int)faltas[k] == (int)'p' ||
            (int)faltas[k] == (int)'P'
        ){
            printf("Presente\n");
            continue;
        }
        printf("Faltou\n");

    }

    return 0;
}

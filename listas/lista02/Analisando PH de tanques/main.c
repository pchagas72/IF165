#include <stdio.h>

typedef struct tanque{
    float medicoes[3];
    float media;
    int ID;
} Tanque;

float mediaTanque(Tanque tanque);
void recebeMedidasDoTanque(Tanque *tanque);
void diaComMaiorVariacao(Tanque *tanques);
void printaMedidasDoTanque(Tanque *tanques);

int main(){
    Tanque tanques[4];
    for (int i = 0;i < 4;i++) {
        recebeMedidasDoTanque(&tanques[i]);
        tanques[i].ID = i+1;
        tanques[i].media = mediaTanque(tanques[i]);
    } 
    printaMedidasDoTanque(tanques);
    diaComMaiorVariacao(tanques);
    return 0;
}

float mediaTanque(Tanque tanque){
    return ((tanque.medicoes[0] + 
            tanque.medicoes[1] +
            tanque.medicoes[2] )/3);
}

void recebeMedidasDoTanque(Tanque *tanque){
    for (int i = 0;i < 3;i++) {
        scanf("%f", &tanque->medicoes[i]);
    }
}

void printaMedidasDoTanque(Tanque *tanques){
    printf("Medias de pH e tendencias dos tanques:\n");
    for (int i = 0; i < 4; i++) {
        char *tendencia;
        if (tanques[i].media < 7.0) {
            tendencia = "Tendencia Acida";
        } else if (tanques[i].media > 7.0) {
            tendencia = "Tendencia Basica";
        } else {
            tendencia = "Neutro";
        }
        printf("Tanque %d: Media = %.2f - %s\n", tanques[i].ID, tanques[i].media, tendencia);
    }
}

void diaComMaiorVariacao(Tanque *tanques){
    float variancias[3] = {0,0,0};
    int dia = 1;
    float maior_var = 0.0;

    for (int i = 0; i < 3; i++) {
        float maior = tanques[0].medicoes[i];
        float menor = tanques[0].medicoes[i];
        for (int j = 1; j < 4; j++) {
            if (tanques[j].medicoes[i] > maior) {
                maior = tanques[j].medicoes[i];
            }
            if (tanques[j].medicoes[i] < menor) {
                menor = tanques[j].medicoes[i];
            }
        }
        variancias[i] = maior - menor;
        if (variancias[i] > maior_var) {
            maior_var = variancias[i];
            dia = i+1;
        }
    }
    printf("Dia com maior variaçao entre tanques: Dia %d (Variacao: %.2f)\n", dia, maior_var);
}


#include <stdio.h>
#include <math.h>

int leNotas(float *buffer);
float media (float *buffer);
float variancia (float *buffer);
float desvio (float *buffer);

int leNotas(float *buffer){
    scanf("%f %f %f %f %f",
          &buffer[0],
          &buffer[1],
          &buffer[2],
          &buffer[3],
          &buffer[4]);
    for (int i = 0;i < 5;i++) {
        if (buffer[i] < 0) {
            printf("As notas devem ser maiores ou iguais a zero.");
            return 1;
        }
    }
    return 0;
}

float media(float *buffer){
    float soma = 0.0f;
    for (int i = 0;i < 5;i++) {
        soma += buffer[i];
    }
    return soma/5;
}

float variancia (float *buffer){
    float m = media(buffer);
    float soma = 0.0f;
    for (int i = 0; i < 5; i++) {
        soma += (buffer[i] - m) * (buffer[i] - m);
    }
    return soma / 5.0f;
}

float desvio (float *buffer){
    return sqrt(variancia(buffer));
}

int main(){
    float buffer[5];
    int x = leNotas(buffer);
    if (x == 1) {
        return 0;
    }
    printf("Media: %.4f\n",media(buffer));
    printf("Variancia: %.4f\n",variancia(buffer));
    printf("Desvio Padrao: %.4f\n",desvio(buffer));
    return 0;
}

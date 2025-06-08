#include <stdio.h>

void getInput(float *buffer);
float retornaMedia(float *buffer);
int checaDias(float *buffer,int *dias_buffer,float media);

int main(){

    float buffer[7];
    int diasBuffer[7];
    getInput(buffer);
    float media = retornaMedia(buffer);
    printf("Media semanal de sono: %.2f horas\n",media);
    if (media >= 8) {
        printf("A media esta dentro do esperado de pelo menos 8 horas!\n");
        return 0;
    }
    printf("A media esta fora do esperado de pelo menos 8 horas!\n");
    printf("Atencao! Judite dormiu abaixo da media semanal nos dias:\n");
    int dias = checaDias(buffer,diasBuffer,media);
    for (int i = 0;i < dias;i++) {
        if (diasBuffer[i] == 0) {
            printf("Domingo\n");
        }
        if (diasBuffer[i] == 1) {
            printf("Segunda\n");
        }
        if (diasBuffer[i] == 2) {
            printf("Terca\n");
        }
        if (diasBuffer[i] == 3) {
            printf("Quarta\n");
        }
        if (diasBuffer[i] == 4) {
            printf("Quinta\n");
        }
        if (diasBuffer[i] == 5) {
            printf("Sexta\n");
        }
        if (diasBuffer[i] == 6) {
            printf("Sabado\n");
        }
    }
    return 0;
}

void getInput(float *buffer){
    scanf("%f %f %f %f %f %f %f",
          &buffer[0],
          &buffer[1],
          &buffer[2],
          &buffer[3],
          &buffer[4],
          &buffer[5],
          &buffer[6]);
}

float retornaMedia(float *buffer){
    float media = 0;
    for (int i = 0;i < 7;i++) {
        media += buffer[i];
    }
    return media/7;
}

int checaDias(float *buffer,int *dias_buffer, float media){
    int dias_counter = 0;
    for (int i = 0;i < 7;i++) {
        if (buffer[i] < media) {
            dias_buffer[dias_counter] = i;
            dias_counter++;
        }
    }
    return dias_counter;
}

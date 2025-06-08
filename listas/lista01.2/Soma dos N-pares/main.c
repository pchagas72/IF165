#include <stdio.h>

int recebeInput(){
    int x;
    scanf("%d",&x);
    if (x < 0) {
        printf("Numero invalido. Deve ser positivo.");
        return -1;
    }
    return x;
}

int main(){
    int x = recebeInput();
    if (x == -1) {
        return 1;
    }
    int sum = 0;
    for (int i = 0;i <= x; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("A soma dos numeros pares de 1 ate %d e %d.",x, sum);
    return 0;
}

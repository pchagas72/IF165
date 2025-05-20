#include <stdio.h>

float cpf(float c){
    return (c * 9/5 + 32);
}

int main(){
    float x;
    scanf("%f",&x);
    printf("%.2f", cpf(x));
    return 0;
}

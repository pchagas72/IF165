#include <stdio.h>
#include <math.h>

float raiz_besima(float a, float b) {
    return pow(a, 1.0f / b);
}

int main() {
    float a, b;
    
    scanf("%f %f", &a, &b);

    float resultado = raiz_besima(a, b);
    printf("%.2f", resultado);

    return 0;
}


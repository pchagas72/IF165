#include <stdio.h>
#include <math.h>

void print_resultados(float res_total,
                      float corrente_total,
                      float pot_total){
    printf("============ RESULTADOS ============\n");
    printf("Resistencia total equivalente: %.2f ohms\n", res_total);
    printf("Corrente total do circuito: %.4f A\n", corrente_total);
    printf("Potencia total dissipada: %.4f W\n", pot_total);
    printf("====================================\n");
}

int main(){
    float k1,k2,k3,k4;
    scanf("%f %f %f %f",&k1,&k2,&k3,&k4);
    float res_total = k2+k3+k4;
    float corrente_total = k1/res_total;
    print_resultados(res_total,corrente_total,k1*corrente_total);


    return 0;
}

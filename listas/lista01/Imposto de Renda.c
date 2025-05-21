#include <stdio.h>

float retornaAliquota(float salario){
    if (salario <= 2826.65){
        return 7.5;
    } 
    if (salario <= 3751.05){
        return 15.0; 
    } 
    if (salario <= 4665.68){
        return 22.5;
    }
    return 27.5;
}

void printSaida(float sb, float aliquota, float imposto){

    int substituir = 0;
    int al;
    if (aliquota == (int)aliquota){
        substituir = 1;
    }

    printf("Salario bruto: R$ %.2f\n",sb); 
    if (substituir == 1){
        printf("Aliquota aplicada: %d\%\n", (int)aliquota);
    } else{
        printf("Aliquota aplicada: %.1f\%\n", aliquota);
    }
    printf("Imposto devido: R$ %.2f\n",imposto); 
}

int main(){
    float sb,aliquota,imposto; 
    scanf("%f", &sb);

    if (sb <= 1903.98){
        printf("Isento de IRRF.");
        return 0;
    }
    
    aliquota = retornaAliquota(sb);
    imposto = (sb*aliquota)/100;
    printSaida(sb,aliquota,imposto);

    return 0;
}

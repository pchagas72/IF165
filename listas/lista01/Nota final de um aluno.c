#include <stdio.h>

int main(){
    float nota;    
    scanf("%f",&nota);
    if (nota >= 7){
        printf("Aprovado");
        return 0;
    } 
    if (nota >= 3){
        printf("Exame");
        return 0;
    }
    printf("Reprovado");

}

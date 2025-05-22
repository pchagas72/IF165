#include <stdio.h>

int main(){
    
    int penalidades = 0;
    int tempInt = 0;
    printf("Bateu na baliza?\n");
    char baliza;
    baliza = getchar();
    if ((int)baliza == (int)'s'){
        printf("Candidato reprovado\n");
        return 0;
    }
    printf("Quantas vezes o candidato esqueceu de ligar a seta\n");
    scanf("%d",&tempInt); 
    penalidades += tempInt;
    tempInt = 0;
    printf("Quantas vezes o candidato deixou o carro dar tranco\n");
    scanf("%d",&tempInt); 
    penalidades += tempInt;
    tempInt = 0;
    printf("Quantas vezes o candidato deixou o carro morrer\n");
    scanf("%d",&tempInt); 
    penalidades += tempInt;
    tempInt = 0;

    if (penalidades > 3){
        printf("Reprovado\n");
        return 0;
    }
    printf("Aprovado\n");
    return 0;
}

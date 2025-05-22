#include <stdio.h>
#include <math.h>

int ops[12] = {
    (int)'A',(int)'S',
    (int)'M',(int)'D',
    (int)'P',(int)'R',
    (int)'a',(int)'s',
    (int)'m',(int)'d',
    (int)'p',(int)'r'
};

int pedeOps(){
    char resposta;
    printf("Digite sua operação\n");
    printf("(A)dição\n");
    printf("(S)ubstração\n");
    printf("(M)ultiplicação\n");
    printf("(D)ivisão\n");
    printf("(P)otenciação\n");
    printf("(R)aiz\n");

    resposta = getchar();
    for (int i = 0;i <= 11;i++) {
        if ((int)resposta == ops[i]){
            return (int)resposta;            
        }
    }
    printf("Operação inválida\n");
    return '1';
}

void pedeInput(float *first, float *sec){
    scanf("%f %f", first, sec);
}

int main(){

    int op = pedeOps();
    float x,y = 0;
    switch (op) {
        case (int)'A':{
            pedeInput(&x,&y);
            printf("%.2f", x+y); 
            break;
        }
        case (int)'a':{
            pedeInput(&x,&y);
            printf("%.2f", x+y); 
            break;
        }
        case (int)'S':{
            pedeInput(&x,&y);
            printf("%.2f", x-y); 
            break;
        }
        case (int)'s':{
            pedeInput(&x,&y);
            printf("%.2f", x-y); 
            break;
        }
        case (int)'m':{
            pedeInput(&x,&y);
            printf("%.2f", x*y); 
            break;
        }
        case (int)'M':{
            pedeInput(&x,&y);
            printf("%.2f", x*y); 
            break;
        }
        case (int)'d':{
            pedeInput(&x,&y);
            if (y == 0){
                printf("Nao e possivel efetuar divisao por 0\n");
                return 1;
            }
            printf("%.2f", x/y); 
            break;
        }
        case (int)'D':{
            pedeInput(&x,&y);
            if (y == 0){
                printf("Nao e possivel efetuar divisao por 0\n");
                return 1;
            }
            printf("%.2f", x/y); 
            break;
        }
        case (int)'P':{
            pedeInput(&x,&y);
            printf("%.2f", pow(x,y)); 
            break;
        }
        case (int)'p':{
            pedeInput(&x,&y);
            printf("%.2f", pow(x,y)); 
            break;
        }
        case (int)'r':{
            pedeInput(&x,&y);
            if (x < 0){
                printf("Nao e possivel calcular raiz real de um numero negativo.");
                return 1;
            }
            printf("%.2f", pow(x,1/y)); 
            break;
        }
        case (int)'R':{
            pedeInput(&x,&y);
            if (x < 0){
                printf("Nao e possivel calcular raiz real de um numero negativo.");
                return 1;
            }
            printf("%.2f", pow(x,1/y)); 
            break;
        }
        
    }

    return 0;
}

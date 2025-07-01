#include <stdio.h>

void preencheVetor(int *vetor);
void aplica_operacao(int vetorA[], int vetorB[], char op);
int check_op(char op);

int main(){

    char choice;
    int vetorA[3];
    int vetorB[3];

    preencheVetor(vetorA);
    preencheVetor(vetorB);
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Flushing stdin
    choice = getchar();

    aplica_operacao(vetorA, vetorB, choice);

    return 0;
}

void aplica_operacao(int vetorA[], int vetorB[], char op){
    if (check_op(op) != 1) {
        printf("Operacao invalida!");
        return;
    }
    printf("Resultado: ");

    for (int i = 0;i < 3;i++) {
        if (op == 's') {
            printf("%d ", vetorA[i]+vetorB[i]);
        }
        if (op == 'd') {
            printf("%d ", vetorA[i]-vetorB[i]);
        }
        if (op == 'm') {
            printf("%d ", vetorA[i]*vetorB[i]);
        }
    }
}

void preencheVetor(int *vetor){
    scanf("%d %d %d", &vetor[0],
                        &vetor[1],
                        &vetor[2]);
}

int check_op(char op){
    char valid_ops[3] = {'s','d','m'};
    for (int i = 0;i < 3;i++) {
        if (op == valid_ops[i]) {
            return 1;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdbool.h>


int main(){

    // Define-se uma variável com a seguinte sintaxe:
    // TIPO NOME = VALOR;
    int numero_legal = 69; // Esta é uma variável de tipo INTEIRO, com valor 69
    char letra_incrivel = 'A'; // Esta é uma variável de tipo CHAR (letra) e valor A
    bool fake = true; // Esta é uma variável de tipo booleano, que tem nome "fake", mas é true.
    
    char melhor_nome[5] = "Pedro"; // Este é um ARRAY DE CHARS
    // Um array é uma estrutura de dados, mas por agora trataremos como umas lista
    // Podemos utilizar os arrays para escrever strings! Que são listas de letras, afinal.

    int numero = 10;
    long int numero_grandao = 9223372036854775807;
    float numero_decimal = 3.13;
    double numero_decimal_preciso = 3.14159265358979;

    // Todas estas são variáveis numéricas
    // O nome indica a peculiaridade de cada tipo
    
    // A função printf permite printar variáveis também
    // Utiliazmos a seguinte sintaxe:
    printf("%d\n", numero);
    // O % indica que vamos ler uma variável que será informada após a vírgula
    // %d -> números
    // %c -> CHARS
    printf("%cna Lima\n", letra_incrivel);
    // %s -> strings
    printf("%s\n", melhor_nome);


    return 0;
}

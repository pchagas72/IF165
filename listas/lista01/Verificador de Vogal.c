#include <stdio.h>

int main(){

    char vogais[10] = {'a','A',
        'e','E',
        'i','I',
        'o','O',
        'u','U'};
    char input;
    scanf("%c",&input);
    int d = (int)input;
    int comparator;
    for (int i = 0; i <= 10; i++){
        comparator = (int)vogais[i];
        if (d == comparator){
            printf("%c eh uma vogal.", input);
            return 0;
        }
    }
    printf("%c nao eh uma vogal.", input);

    return 0;
}

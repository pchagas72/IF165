#include <stdio.h>

int main(){

    int vetorInicial[10];
    for (int i = 0;i < 10;i++) {
        scanf("%d", &vetorInicial[i]);
        vetorInicial[i] -= 1;
        if ((vetorInicial[i] % 2) != 0) {
            vetorInicial[i] += 1;
        }
        if ((i % 2) != 0) {
            printf("%d ",vetorInicial[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int check_multiple(int n){
    if (n % 3 == 0 || n % 5 == 0){
        return 0;
    }
    return 1;
}

int main(){
    int sum = 0;
    for (int i = 0; i < 1000; i++){
        if (check_multiple(i) == 0){
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}

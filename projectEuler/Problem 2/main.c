#include <stdio.h>

int main(){
    int n = 1;
    int m = 2;
    int sum = 2;
    int fib = 0;
    while (fib <= 4000000){
        fib = n+m;
        n = m;
        m = fib;
        if (fib % 2 == 0){
            sum += fib;
        }
    }
    printf("Sum: %d\n", sum);

    return 0;
}


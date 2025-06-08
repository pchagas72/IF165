#include <stdio.h>

struct shoe {
    int size;
    int counter;
};
typedef struct shoe Shoe;

void init_shoe(Shoe *shoe,int counter, int size){
    shoe->size = size;
    shoe->counter = counter;
}

int main(){
    int size;
    Shoe shoes[7];
    int shoes_counter = 0;
    while (size != -1) {
        scanf("%d", &size);
        if (size < 38 || size > 45) {
            continue;
        }
        for (int i = 0;i <= shoes_counter;i++) {
            if (i == shoes_counter && size != -1) {
                Shoe temp;
                init_shoe(&temp,1,size);
                shoes[shoes_counter] = temp;
                shoes_counter++;
                break;
            }
            if (shoes[i].size == size) {
                shoes[i].counter++;
                break;
            }
        }
    }
    int max_counter = 0;
    int max_shoe = 0;
    for (int i = 0;i < shoes_counter;i++) {
        if (shoes[i].counter > max_counter) {
            max_shoe = shoes[i].size;
            max_counter = shoes[i].counter;
        }
    }
    printf("O numero de sapato mais comum e: %d",max_shoe);
    return 0;
}

#include <stdio.h>

int main(void){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("| %d x %d = %2d |", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}

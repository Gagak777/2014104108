#include <stdio.h>

int main(void){
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 9; j++){
            printf("| %d x %d = %2d |", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}

#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa3.c"


#include <stdio.h>

/* TODO: implemente sua função conta_1 aqui */
void matriz1(long arr[5][4]){
    int i;
    int j;
    
    for (i = 0; i<4; i++ ){
        int soma =0;
        for (j = 0; j<5; j++){
            soma += arr[j][i];

        }
        printf("%d \n", soma);
    }
    
    
}


int main() {
    long mat[5][4]={
        {1, 2, 3, 4},
        {4, 3, 2, 1},
        {3, 2, 1, 4},
        {6, 9, 8, 4},
        {0, 0, 0, 0}
    };

    matriz1(mat);


    return 0;
}
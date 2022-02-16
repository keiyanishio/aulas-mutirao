// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

// TODO implemente seu programa aqui

void funo (int n){
    for (int i = 1; i <= n; i++){
        if (i%5==0 && i%3==0){
            printf("Mútiplos dos dois números: %d\n", i);
        }

        else if (i%5==0){
            printf("Mútiplo de 5: %d\n", i);

        }

        else if (i%3==0){
            printf("Múltiplo de 3: %d\n", i);
        }

        else{
            printf("nenhum\n");
        }
    }
}
int main() {
    funo(20);

    
    

    return 0;
}

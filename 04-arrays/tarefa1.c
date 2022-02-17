// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main(int argc, char *argv[]) {

    /* TODO: conserte o código abaixo */
	long vetor[5];
	int i;
	int j;
	int pos;
	for (j = 0; j<5; j++){
		printf("Digite um número: ");
		scanf("%d", &pos);
		vetor[j]=pos;

	}
	for(i = 0; i < 5; i++) {
		if (vetor[i] % 2 == 0) {
			printf("Par! \n");
		}
		printf("i: %d, vetor[i]: %ld\n", i, vetor[i]);
	}

	return 0;
}

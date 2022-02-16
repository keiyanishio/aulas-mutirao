// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa3.c"

#include <stdio.h>
#include <math.h>    /* <---- precisa incluir!!! */

#define PI 3.141592

void print_trigo(double a) {
    printf("seno: %lf, cosseno: %lf\n", sin(a), cos(a));
}

int main() {
    double angle;
    

    printf("Digite um ângulo em graus: ");
    scanf("%lf", &angle);

    angle = angle*PI/180;

    print_trigo(angle);

    return 0;
}

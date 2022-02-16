#include <stdio.h>

void num(int n1, int n2) {
  if (n2==0){
      printf("Erro\n");
  }
  else if (n1%n2==0){
      printf("É múltiplo\n");
  }
  else{
      printf("Nao eh multiplo\n");
  }
  
  
}

int main() {
    int number1;
    int number2;

    while (number1!=0 || number2!=0){
        printf("Digite um número: ");
        scanf("%d", &number1);

        printf("Digite um número:");
        scanf("%d", &number2);

        num(number1, number2);

    }
    

    


    

    return 0;
}
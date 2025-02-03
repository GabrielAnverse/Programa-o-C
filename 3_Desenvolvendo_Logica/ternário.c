#include <stdio.h>

int main() {
  int idade;
  char* resultado;

  printf("Qual a sua idade?\n");
  scanf ("%d", &idade);

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade"; //Operador ternário pode substituir o "if" em alguns casos

  printf("Resultado: %s\n", resultado);

  /* 
  Outro exemplo:

  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2; //numero 1 é maior que o 2 se sim "maior" é o 1 se não é o 2

  printf("O maior número é: %d\n", maior); // mostra o maior que ganhou valor no ternério a cima
  */

  return 0;
}
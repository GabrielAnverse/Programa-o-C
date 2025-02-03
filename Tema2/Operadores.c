#include <stdio.h>

    int main (){
        /*
        (&&) = (E) retorna positivo se os dois valores forem verdadeiros 
        (||) = (OU) retorna positivo se pelo enos um dos dois valores foram verdadeiros
        (!) = (Não) inverte o valor. Se a condição for verdadeira, ela se torna falsa, e vice-versa

        Operadores	            Associatividade
        () []	                esquerda para a direita
        ! - ++ --	            direita para a esquerda
        * / %	                esquerda para a direita
        + -	                    esquerda para a direita
        < <= > >=	            esquerda para a direita
        == !=	                esquerda para a direita
        &&	                    esquerda para a direita
        ||	                    esquerda para a direita
        = += -= *= /= %=	    direita para a esquerda
        ,	                    esquerda para a direita
        */

       /*
        int a = 5;
        int b = -10;
        int c = 0;

        if (a > 0 && b < 0 || c == 0) {
          printf("A condição é verdadeira\n");
        } else {
          printf("A condição é falsa\n");
        }

        int idade = 20;
        float altura = 1.75;

        if (idade >= 18 && idade <= 30 && altura > 1.70) {
          printf("Você está na faixa etária e tem a altura adequada\n");
        } else {
          printf("Você não atende aos critérios\n");
        }

        float temperatura = 25.0;
        float umidade = 55.0;

        if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
          printf("As condições estão favoráveis\n");
        } else {
          printf("As condições não estão favoráveis\n");
        }
        */


  // estruturas alinhadas, if dentro de if
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

    

  return 0;
    }
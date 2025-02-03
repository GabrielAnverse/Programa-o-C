#include <stdio.h>

int main() {
  int opcao;

    /*
    switch (variavel) {
        case valor1:
            // Código a ser executado se variavel == valor1
        break;
        case valor2:
            // Código a ser executado se variavel == valor2
        break;
            // Você pode adicionar quantos casos forem necessários
        default:
            // Código a ser executado se nenhum dos casos acima for verdadeiro
    }
    */

   // O switch é especialmente útil quando você tem muitas condições para verificar e deseja evitar uma longa sequência de instruções if-else-if
    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Saldo atual: R$ 1.000,00\n");
            break;
        case 2:
            printf("Depósito realizado com sucesso\n");
            break;
        case 3:
            printf("Saque realizado com sucesso\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    

   //Se faz a mesmo coisa usando o "if" mas é mais trabalhoso
    int dia = 3;

    printf ("Qual o dia da semana(em numero)?\n");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda-feira\n");
    } else if (dia == 3) {
        printf("Terça-feira\n");
    } else if (dia == 4) {
        printf("Quarta-feira\n");
    } else if (dia == 5) {
        printf("Quinta-feira\n");
    } else if (dia == 6) {
        printf("Sexta-feira\n");
    } else if (dia == 7) {
        printf("Sábado\n");
    } else {
        printf("Dia inválido\n");
    }

  return 0;
}
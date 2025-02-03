#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int escolhaJogador, escolhaComputador;
  srand(time(0));

  printf("*** Jogo de Jokenpô ***\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha uma opção: ");
  scanf("%d", &escolhaJogador);

  escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
            case 2:
            printf("Jogador: Papel - ");
            break;
            case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Opção invalida\n");
            break;
    }

    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra \n");
            break;
            case 2:
            printf("Computador: Papel \n");
            break;
            case 3:
            printf("Computador: Tesoura \n");
            break;
    }

    if(escolhaComputador == escolhaJogador)
    {
        printf("*** Empate, tente outra vez! ***\n");
    } else if((escolhaComputador == 1) && (escolhaJogador == 2) || (escolhaComputador == 2) && (escolhaJogador == 3) || (escolhaComputador == 3) && (escolhaJogador == 1))
    {
        printf("*** Parabens, você ganhou! ***\n");
    }   else {
        printf("*** Computador ganhou, tente novamente! ***\n");
    }       
  return 0;
}
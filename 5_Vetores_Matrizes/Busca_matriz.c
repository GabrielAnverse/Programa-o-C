#include <stdio.h>

#define LINHA 5
#define COLUNA 5

 
int main() {
    int matriz[LINHA][COLUNA];

    int target = 9;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++) { //os dois "For" colocam a ordem na matriz, fazendo a lina 0 com todas a colunas e assim por diante.
        for (int j = 0; j < COLUNA; j++) {  
            matriz[i][j] = soma;//a cada volta a soma acresenta 1 dando valor a cada casa criada.
            soma++;
            printf("%2d ", matriz[i][j]);// o "%2d" faz com que todos os numeros sejam impressos com duas casa e fiquem alinhados na matriz.
        }
        printf("\n");
    }
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}
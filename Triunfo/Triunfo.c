#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para representar as propriedades de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    char estado;

    printf("Bem-vindo ao Super Trunfo - Países (Nível Novato)!\n\n");

    // Loop para cadastrar os dados das cidades
    for (int i = 0; i < NUM_ESTADOS; i++) {
        estado = 'A' + i; // Define a letra do estado (A, B, C, ...)
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Define o código da cidade (ex: A01, B02, etc.)
            sprintf(cidades[i][j].codigo, "%c%02d", estado, j + 1);

            printf("Cadastro da cidade %s:\n", cidades[i][j].codigo);

            printf("- População: ");
            scanf("%d", &cidades[i][j].populacao);

            printf("- Área (em km²): ");
            scanf("%f", &cidades[i][j].area);

            printf("- PIB (em milhões): ");
            scanf("%f", &cidades[i][j].pib);

            printf("- Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);

            printf("\n");
        }
    }

    // Exibição dos dados cadastrados
    printf("\nDados das cidades cadastradas:\n\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        estado = 'A' + i;
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Cidade %s:\n", cidades[i][j].codigo);
            printf("- População: %d\n", cidades[i][j].populacao);
            printf("- Área: %.2f km²\n", cidades[i][j].area);
            printf("- PIB: %.2f milhões\n", cidades[i][j].pib);
            printf("- Pontos turísticos: %d\n", cidades[i][j].pontos_turisticos);
            printf("\n");
        }
    }

    printf("Cadastro concluído. Obrigado por usar o sistema!\n");

    return 0;
}

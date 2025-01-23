#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
} Cidade;

int main() {
    Cidade cidades[32]; // 8 estados * 4 cidades por estado
    char estados[] = "ABCDEFGH";
    int cidadeIndex = 0;

    printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Países!\n");
    printf("Você irá cadastrar 32 cidades, divididas em 8 estados (A a H).\n\n");

    // Cadastro das cidades
    for (int i = 0; i < 8; i++) { // Para cada estado (A a H)
        for (int j = 1; j <= 4; j++) { // Para cada cidade (1 a 4)
            // Gerar o código da cidade (e.g., A01, B02)
            sprintf(cidades[cidadeIndex].codigo, "%c%02d", estados[i], j);

            printf("Cadastro da cidade %s:\n", cidades[cidadeIndex].codigo);
            printf("Digite a população: ");
            scanf("%d", &cidades[cidadeIndex].populacao);

            printf("Digite a área (em km²): ");
            scanf("%f", &cidades[cidadeIndex].area);

            printf("Digite o PIB (em bilhões): ");
            scanf("%lf", &cidades[cidadeIndex].pib);

            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &cidades[cidadeIndex].pontosTuristicos);

            printf("\n");
            cidadeIndex++;
        }
    }

    // Exibição dos dados cadastrados
    printf("\nResumo das cartas cadastradas:\n");
    for (int i = 0; i < 32; i++) {
        printf("Cidade %s:\n", cidades[i].codigo);
        printf("  População: %d habitantes\n", cidades[i].populacao);
        printf("  Área: %.2f km²\n", cidades[i].area);
        printf("  PIB: %.2lf bilhões\n", cidades[i].pib);
        printf("  Pontos Turísticos: %d\n\n", cidades[i].pontosTuristicos);
    }

    printf("Cadastro concluído com sucesso!\n");
    return 0;
}

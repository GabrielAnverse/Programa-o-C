#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para representar as propriedades de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Cidade;

// Função para calcular o "super poder" da cidade
float calcular_super_poder(Cidade cidade) {
    return cidade.populacao + cidade.area + cidade.pib + cidade.pontos_turisticos + 
           cidade.densidade_populacional + cidade.pib_per_capita;
}

// Função para comparar duas cidades
void comparar_cidades(Cidade c1, Cidade c2) {
    printf("\nComparação entre %s e %s:\n", c1.codigo, c2.codigo);

    printf("- População: %s\n", c1.populacao > c2.populacao ? c1.codigo : c2.codigo);
    printf("- Área: %s\n", c1.area > c2.area ? c1.codigo : c2.codigo);
    printf("- PIB: %s\n", c1.pib > c2.pib ? c1.codigo : c2.codigo);
    printf("- Pontos turísticos: %s\n", c1.pontos_turisticos > c2.pontos_turisticos ? c1.codigo : c2.codigo);
    printf("- Densidade populacional (menor vence): %s\n", c1.densidade_populacional < c2.densidade_populacional ? c1.codigo : c2.codigo);
    printf("- PIB per capita: %s\n", c1.pib_per_capita > c2.pib_per_capita ? c1.codigo : c2.codigo);
    printf("- Super Poder: %s\n", c1.super_poder > c2.super_poder ? c1.codigo : c2.codigo);
}

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    char estado;

    printf("Bem-vindo ao Super Trunfo - Países (Nível Mestre)!\n\n");

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

            // Calcula propriedades derivadas
            if (cidades[i][j].area > 0) {
                cidades[i][j].densidade_populacional = cidades[i][j].populacao / cidades[i][j].area;
            } else {
                cidades[i][j].densidade_populacional = 0;
            }

            if (cidades[i][j].populacao > 0) {
                cidades[i][j].pib_per_capita = cidades[i][j].pib * 1e6 / cidades[i][j].populacao; // PIB em reais
            } else {
                cidades[i][j].pib_per_capita = 0;
            }

            cidades[i][j].super_poder = calcular_super_poder(cidades[i][j]);

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
            printf("- Densidade populacional: %.2f hab/km²\n", cidades[i][j].densidade_populacional);
            printf("- PIB per capita: R$ %.2f\n", cidades[i][j].pib_per_capita);
            printf("- Super Poder: %.2f\n", cidades[i][j].super_poder);
            printf("\n");
        }
    }

    // Comparação entre duas cidades
    char codigo1[4], codigo2[4];
    Cidade *cidade1 = NULL, *cidade2 = NULL;

    printf("\nDigite o código da primeira cidade para comparar: ");
    scanf("%s", codigo1);
    printf("Digite o código da segunda cidade para comparar: ");
    scanf("%s", codigo2);

    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (strcmp(cidades[i][j].codigo, codigo1) == 0) {
                cidade1 = &cidades[i][j];
            }
            if (strcmp(cidades[i][j].codigo, codigo2) == 0) {
                cidade2 = &cidades[i][j];
            }
        }
    }

    if (cidade1 && cidade2) {
        comparar_cidades(*cidade1, *cidade2);
    } else {
        printf("\nUma ou ambas as cidades não foram encontradas.\n");
    }

    printf("\nComparação concluída. Obrigado por usar o sistema!\n");

    return 0;
}

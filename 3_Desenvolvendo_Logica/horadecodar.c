#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f, &temperatura");

    printf("Entre com a umidade:\n");
    scanf("%f, &umidade");

    printf("Entre com o estoque:\n");
    scanf("%u, &estoque");

    if (temperatura > 30){
        printf("Temperatura está alta\n");
    } else {
        printf("temperatura está dentro dos parêmetros\n");
    }

    if (umidade > 50){
        printf("Umidade elevada\n");
    } else {
        printf("Umidade está dentro dos parêmetros\n");
    }

    if (estoque < estoque_minimo){
        printf("Estoque está baixo\n");
    } else {
        printf("Estoque normal\n");
    }
}
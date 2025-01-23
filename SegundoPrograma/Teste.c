#include <stdio.h>

int main() {

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade); //lê o que foi informado pelo cidadão... "Leia" sempre deve ser colocado o "&"
    printf("Sua idade é: %d\n", idade);


    return 0;

}
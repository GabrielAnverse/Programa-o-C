#include <stdio.h>
 
int main() {
    // int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores, é uma forma diferente de declarar variaveis...

    // int (tipo), numero (nome), [X] a quatidade, {X, X...} inicializa com os valores fornecidos

    /*
    numeros[0] acessa o primeiro elemento do array, que é 10;
    numeros[2] acessa o terceiro elemento do array, que é 30;
    numeros[4] acessa o quinto elemento do array, que é 50.
    */

    // Acessando e imprimindo elementos específicos do array
    /*
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
    */

    // Exemplos
    float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;
 
    // Exemplo 1, escreve as linhas uma por uma
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n\n", notas[2]);

    // Exemplo 2, usa o for para dar o valor da Arrays, podendo usar para 3, 10 ou mil linhas sem ter que escrever uma por uma
    for(i = 0; i < 3; i++) { //for = X=X da valor a uma variante, X <=> X enquanto for Menor(maior ou igual...), faça X++ acrescenta 1.
        printf("%s\n", nomes[i]);
    }
 
    return 0;
}
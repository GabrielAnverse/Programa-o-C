#include <stdio.h>

int main() {

    /*
    int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    float quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro usando o "int" arredondando o resultado. Por isso é necessário usar o Float

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %.2f\n", quociente); //O ".2" faz com o resultado seja limitado a duas casa decimais 
    */

    /*
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    printf("Resultado: %.2f\n", resultado);
    */

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);


    return 0;

}
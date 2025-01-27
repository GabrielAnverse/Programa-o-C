#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int x = 5;
    float y = 5.0;

    char c = 'a';

    float numero1 = 10.2;
    int numero2 = 10;

    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    /*
    a > b: 0 indica que a não é maior que b.
    a < b: 1 indica que a é menor que b.
    a == b: 0 indica que a não é igual a b.
    a != b: 1 indica que a é diferente de b.
    */

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é: %d \n", c, c);

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2); //o "(int)" vem como uma conversão explicita de numero decimal para inteiro, desta forma o programa vai ignorar as casas depois da virgula e transformar o numero em inteiro.
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);

    printf("num == result: %d\n", comparison);

    return 0;
}
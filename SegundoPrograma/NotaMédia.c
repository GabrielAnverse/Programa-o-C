#include <stdio.h>

int main()
{
    /* code */
    float nota1, nota2, nota3;
    float media;

    printf("------- Programa de calculo de média! -------\n\n");

    printf("Digíte sua primeira nota: \n");
    scanf ("%f, &nota1");

    printf("Digíte sua segunda nota: \n");
    scanf ("%f, &nota2");

    printf("Digíte sua terceira nota: \n");
    scanf ("%f, &nota3");

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f", media);

    return 0;
}

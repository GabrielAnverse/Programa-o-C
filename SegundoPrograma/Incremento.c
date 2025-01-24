#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;
    
    printf ("Antes Incremento: %d\n", numero1);

    resultado = numero1++;// pós incremento, primeiro é atribuido o valor original da variante (neste caso o "numero1") e depois é incrementado o ++ o que torna o resultado de "numero1"= a 2 e o "resultado" é 1

    printf ("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;// pré incremento, é atribuido ao "Resultado" o "numero1" já com o incremento, assim os dois ficam com valor igual.

    printf ("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    numero1++; //como numero1 + 1
    printf ("Após incremento: %d\n", numero1);

    numero1--;//como numero1 - 1
    printf ("Após decremento: %d\n", numero1);

    return 0;

}
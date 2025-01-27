#include <stdio.h>
 
int main() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;

    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;

    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;

    /*
    int	= -2,147,483,648 a 2,147,483,647
    unsigned int = 0 a 4,294,967,295
    char = -128 a 127
    unsigned char = 0 a 255
    */
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);

    /*
    int	= -2,147,483,648 a 2,147,483,647
    long int = -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
    double = ±1.7E-308 a ±1.7E+308
    long double =	±3.4E-4932 a ±1.1E+4932
    */

    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 


 
    return 0;
}
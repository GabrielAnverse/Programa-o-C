#include <stdio.h>

int main() {

    //Pratico de loops avançados, for dentro de for.
    //Toda vez que for rodar o primeiro loop(de fora) ele vai rodar o loop de dentro todas as vezes
    int i, j;
    char letra;

    for (i = 1; i <=5; i++){
        letra = 'A';
        for(j = 1; j <= i; j++){
            printf("%c ", letra);
            letra++;
        }
        printf("\n");
    }   

    return 0;
}
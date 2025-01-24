#include <stdio.h>

int main(){

    printf("Olá, Mundo!\n");

    int idade; //inteiro
    int quantidade; 
    float altura;//numero com casa decimal
    double peso;//numeros grandes com muitas casas decimais
    char nome[20];//letras, colocar entre a caixa [] a quantidade de caractéres
    char letra; //letra
}

    /*
    Especificadores que correspondem aos tipos de variaveis que deseja imprimir com "printf"

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    /*Expemplo

    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
    */
 
    //return 0; - parar programa

    int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade); //lê o que foi informado pelo cidadão... "Leia" sempre deve ser colocado o "&"
    printf("Sua idade é: %d\n", idade);

    // Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}

int main() {
 
    entradaDados();
    media = calcularMedia();
    exibirMedia();

    return 0;

}
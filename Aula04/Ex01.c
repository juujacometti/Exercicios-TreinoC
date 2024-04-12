#include <stdio.h>

int main() {

/* Objetivo: Crie um programa que leia caractere, número inteiro e número real. Mostre as possíveis saídas conforme cada tipo de entrada. */

// Variável:
    int numeroInteiro;
    double numeroReal;
    char caractere;

// Solicitação de caractere, número inteiro e número real:
    printf("Digite uma letra: ");
    scanf("%c", &caractere);

    printf("\nDigite um numero inteiro: ");
    scanf("%i", &numeroInteiro);

    printf("\nDigite um numero real: ");
    scanf("%lf", &numeroReal); 

// Execução:
    printf("\n\nVoce informou o caractere: %c", caractere);
    printf("\n\nVoce informou o numero inteiro: %i", numeroInteiro);
    printf("\n\nVoce informou o numero real: %lf", numeroReal);

    return 0;

}
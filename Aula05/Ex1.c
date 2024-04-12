#include <stdio.h>
#include <math.h>

// Objetivo: Faça um programa que leia um número real qualquer e mostre o seu respectivo valor absoluto.

int main() {

// Variáveis:
    float numeroReal;

//  Solicitação pro usuário:
    printf("Insira um numero real: ");
    scanf("%f", &numeroReal);

// Chamando a função 'fabs' (função absoluto) da biblioteca Math para executar o cálculo:
    numeroReal = fabs(numeroReal);

// Execução:
    printf("O valor absoluto do numero digitado e %.2f", numeroReal);

    return 0;
}

#include <stdio.h>

int main() {

// Objetivo: Faça um programa que permita o usuário digitar e armazenar dois vetores de 10 números inteiros em cada. 
//Calcule a soma dos elementos de mesma posição dos vetores, elemento por elemento, e armazene em um terceiro vetor. Exiba o terceiro vetor.

// Variáveis:
    int valores[10], valores2 [10], soma[10];
    int i;

// Solicitação p usuário (valores):
    printf("Insira 10 numeros inteiros: \n");

// Looping (valores):
    for (i = 0; i < 10; i++) {
        printf("Numero: ");
        scanf("%d", &valores[i]);
    }

// Solicitação p usuário (valores2):
    printf("\nAgora, insira mais 10 numeros inteiros: \n");

// Looping (valores2):
    for (i = 0; i < 10; i++) {
        printf("Numero: ");
        scanf("%d", &valores2[i]);
    }

// Soma dos valores dos vetores:
    printf("A soma dos valores dos dois vetores é: \n");

// Looping (soma):
    for(int i = 0; i < 10; i++) {
    soma[i] = valores[i] + valores2[i];
    printf("%d ", soma[i]);
    }
}
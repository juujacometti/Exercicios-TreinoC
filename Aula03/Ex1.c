#include <stdio.h>

int main() {

/*Objetivo: Crie um sistema de verificação de notas, onde o usuário informe as notas e o sistema calcule as médias.*/

// Variável: 
    float nota1, nota2, media = 0;

//Solicitação p usuário (nota1 e nota2):
    printf("\nInforme uma nota 1: ");
    scanf("%f", &nota1);
    printf("\nInforme uma nota 2: ");
    scanf("%f", &nota2);

//Operação e resultado da média:
    media = (nota1 + nota2) / 2;
    printf("%.2f", media);

    return 0;
}


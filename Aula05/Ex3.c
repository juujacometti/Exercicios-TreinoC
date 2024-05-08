#include <stdio.h>
#include <math.h>

int main() {

/* Objetivo: Dada a fórmula: (C = ( (F-32) x 5) / 9 ), escreva uma correnspondente a mesma em uma linha de comando. 
Após isso, o usuário deve informar um valor de temperatura em 'Celsius' ou 'Fahrenheit', e de acordo com a opção escolhida, o programa deve informar o resultado no método contrário.*/ 

// Variáveis:
    double temperatura, C, F;
    int escolha;

// Solicitação p usuário (temperatura):
    printf("** Conversor de temperatura ** \nDigite a temperatura que deseja converter: \n");
    scanf("%lf", &temperatura);

// Solicitação p usuário (unidade de temperatura digitada):
    printf("Informe em qual escala a temperatura informada esta: \n1-Celsius \n2-Fahrenheit \n");
    scanf("%d", &escolha);

// Conversão de temperatura:
    // Celsius - Fahrenheit:
    if (escolha == 1) {

        F = (temperatura * 9 / 5) + 32;

        // Demonstração da conversão:
        printf("Temperatura indicada em Celsius = %.lf ", temperatura);
        printf("\nTemperatura convertida para Fahrenheit = %.lf ", F);

    }

    return 0;
}
#include <stdio.h>

int main() {

// Objetivo: Faça um programa onde o usuário informa a altura e o gênero (M/F). Calcule o peso ideal usuando as fórmulas: H = (72,7 * h) - 58 // M = (62,1 * h) - 44,7 
// (H = homem; M = mulher; h = altura)

    int genero;
    double altura, H, M;

// Solicitação p usuário (altura, genêro):
    printf("** Calculadora de peso ideal ** \nPara realizar o calculo, informe a sua altura: \n");
    scanf("%lf", &altura);

    printf("Voce e: \n1- Homem \n2- Mulher \n");
    scanf("%d", &genero);

// Calculo realizado de acordo com o genêro:
     // Homem:
    if (genero == 1) {
    
    H = (72.7 * altura) - 58;

    printf("Homem \nAltura: %.lf \nPeso ideal: %.2lf", altura, H);
    }
    
    // Mulher:
    else {
        M = (62.1 * altura) - 44.7;

        printf("Mulher \nAltura: %.lf \nPeso ideal %.2lf", altura, M);
    }





}
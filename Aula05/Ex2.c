#include <stdio.h>
#include <math.h>

int main() {

// Objetivo: Faça um programa que pergunte a idade do usuário e divida o valor por quatro. Por fim, mostre o quociente e o resto da divisão.

// Variáveis:
    double idade, resultadoDiv;
    int resto;

// Solicitação pro usuário:
    printf("Ola! Informe a sua idade: ");
    scanf("%lf", &idade);

//  Operações:
    // 'floor' é usado par arredondar o valor para o número inteiro mais baixo
    resultadoDiv = floor(idade / 4);
    // O operador '%' é usado para mostrar o resto das divisões de números inteiros 
    resto =  ((int)idade % 4); // Transformando a variável 'idade' em 'int', pois o operador '%' só funciona em números inteiros

// Demonstração dos resultados:
    printf("O quociente da sua idade dividido por quatro e: %.0lf", resultadoDiv);
    printf("\nO resto dessa divisao e: %.2i", resto);

    return 0;
}

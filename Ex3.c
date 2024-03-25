#include <stdio.h>

int main() {

/*Objetivo: O salário de um programador trainee é 3.000 reais + beneficios de plano de saúde e vale refeição de 20 reais por dia. 
Considere o reajuste de salário em 2024 de 5% e o aumento no vale refeição para 28 reais. Considere também que o mês tem 30 dias e 10 são de descanso remunerado.
Informe: o novo valor recebido pela pessoa e o valor pago por hora (6h de segunda a sexta)*/

// Variáveis:
    float salario = 3000, valeRefeicao = 20;

// Demonstrativo salário 2023:
    printf("********************\nProgramador Trainee 2023: \nSalario: %.2f \nVale refeicao: %.2f \n********************", salario, valeRefeicao);

// Acréscimo 2024:
    salario = ((salario * 0.05)+ salario);
    valeRefeicao = (valeRefeicao + 8);

// Demonstrativo salário 2024:
    printf("\n\n********************\nProgramador Trainee 2024: \nSalario: %.2f \nVale refeicao: %.2f \n********************", salario, valeRefeicao);

// Valor pago dia e hora:
    // Valor por dia
    printf("\n\nValor total pago ao funcionario");
    salario = (salario / 30);
    printf("\nPor dia: %.2f", salario);

    // Valor por hora
    salario = (salario / 6);
    printf("\nPor hora: %.2f", salario);

    return 0;
}
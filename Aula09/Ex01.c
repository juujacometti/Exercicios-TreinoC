#include <stdio.h>
#include <stdlib.h> // Geração de números aleatórios
#include <time.h>

int main() {

// Objetivo: Faça um programa que sorteie 6 números distintos e os armazene em um vetor. O vetor já deve estar ordenado em ordem crescente.
// Caso algum número seja repetido no sorteio, o mesmo deve ser ignorado e será sorteado um novo valor. Mostre o resultado para o usuário.

// Vetor:
    int numerosSorteados[6];

// Definição de tamanho (intervalo) do sorteador:
    int minimo = 1; 
    int maximo = 10;

// Inicialização do sorteador (gerador de números aleatórios):
    srand(time(NULL)); 

// Looping (sorteio):
   for(int i = 0; i < 6; i++) {
        numerosSorteados[i] = rand() % (maximo - minimo + 1) + minimo;
    }

// Demonstração p usuário:
    printf("Os numeros sorteados foram: ");
    // Looping:
    for(int i = 0; i < 6; i++) {
        printf("\n%d", numerosSorteados[i]);
    }

    return 0;
}

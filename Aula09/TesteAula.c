#include <stdio.h>
#include <stdlib.h> // Geração de números aleatórios
#include <time.h>
#include <stdbool.h> // Possibilidade de criar variáveis booleanas 

// Função para trocar elementos no vetor:
void swap(int *a, int *b) {
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}

// Função 'partition' é utilizada para dividir o vetor:
int partition(int numerosSorteados[], int baixo, int alto) {
    // Seleção do pivô (número mais alto (mais à direita) do subvetor):
    int pivo = numerosSorteados[alto];
    // Indice 'i' com um valor menor do que o limite menor do subvetor:
    int i = (baixo - 1);

    // Looping (cruzar o vetor da direita para a esquerda para garantir que os elementos menores que o pivô fiquem à esquerda de 'i'):
    for(int j = baixo; j <= alto - 1; j++) {
        if(numerosSorteados[j] < pivo) {
            i++;
            swap(&numerosSorteados[i], &numerosSorteados[j]);
        }
    }

//  Mudança do pivô para a posição correta (após os elementos menores que ele):
    swap(&numerosSorteados[i + 1], &numerosSorteados[alto]);

// Retorno do índice onde o pivô foi colocado:
    return (i + 1);
}


// Declaração da função 'particionar':
int particionar(int numerosSorteados[], int baixo, int alto);

void quickSort(int numerosSorteados[], int baixo, int alto) {

    // Verificação se o índice 'baixo' é menor do que o 'alto':
        if (baixo < alto) {
        // Função 'particionar' para dividir o vetor em 2 em relação ao pivô:
        int pi = particionar(numerosSorteados, baixo, alto);

        // Ordena que os elementos menores que o pivô sejam ordenados da maneira correta (vai do índice 'baixo' até 'pi - 1'):
        quickSort(numerosSorteados, baixo, pi -1);
        // Ordena que os elementos maiores que o pivô sejam ordenados da maneira correta (do índice 'pi + 1 ' até 'alto'):
        quickSort(numerosSorteados, pi + 1, alto);
    }
    
}

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

        // Variável booleana para verificação de números repetidos:
        bool repetido;

        do {
            repetido = false; 
            int novoNumero = rand() % (maximo - minimo + 1) + minimo;

            // Looping de verificação (se novoNumero está em numerosSorteados):
            for(int j = 0; j < i; j++) {
                if (numerosSorteados[j] == novoNumero) { 
                    repetido = true; 
                    break; // Se 'repetido = true' o looping é interrompido
                }
            }

            // Inclusão do novoNumero ao vetor, se 'repetido = false':
            if (!repetido) {
            numerosSorteados[i] = novoNumero;
            }
        } 

        // Repetição do looping até 'repetido = false':
        while (repetido);
    }

// Demonstração p usuário:
    printf("Os numeros sorteados foram: ");
    // Looping:
    for(int i = 0; i < 6; i++) {
        printf("\n%d", numerosSorteados[i]);
    }

    return 0;
}

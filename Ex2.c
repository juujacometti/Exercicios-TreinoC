#include <stdio.h>

int main() {

/*Objetivo: Crie um sistema de verificação de notas, onde: média > 7 = aprovado / média >5 e <7 = recuperação / média <5 reprovado. 
Caso o aluno fique de recuperação, informe a nota da nova prova e some junto a maior nota das provas anteriores. */

// Váriavel:
  float nota1, nota2, notaRec, notaMaior, media = 0;

// Usuário (nota1, nota2):
  printf("\nInforme uma nota 1: ");
  scanf("%f", &nota1);
  printf("\nInforme uma nota 2: ");
  scanf("%f", &nota2);

// Operação e resultado:
  media = (nota1 + nota2) / 2;
  printf("\nA media e: %.2f", (media));

// Condição para recuperação:
  if (media >= 5 && media < 7) {
    printf("\n\Recuperacao!");

// Adicionando a nota de recuperação:
    printf("\nInforme a nota da recuperacao: ");
    scanf("%f", &notaRec);

// Calculo nota maior:
    if (nota1 > nota2) {
      notaMaior = nota1;
    } else if (nota2 > nota1) {
      notaMaior = nota2;
    }
// Calculo da nova média:
    media = (notaMaior + notaRec) / 2;

    printf("\nA sua nova media e: %.2f", media);
  }

// Condição para aprovação:
  else if (media >= 7) {
    printf("\n\nAprovado!");
  }

// Condição para reprovação:
  else {
    printf("\n\nReprovado!");
  }

  return 0;
}
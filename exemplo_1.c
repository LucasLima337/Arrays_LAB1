#include <stdio.h>

/*
Exemplo 1: 
    1. Faça um programa que peça 3 números inteiros ao usuário;
    2. Armazene em um vetor; 
    3. Mostre o valor de cada elemento do vetor, assim como seu índice.
*/


void main() {
    // vetor
    int numbers[3];

    // lendo valores e armazenando no vetor
    for (int i = 0; i < 3; i++) {
        printf("Digite um valor para a posicao %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    // exibindo os valores de dentro do vetor
    for (int i = 0; i < 3; i++) {
        printf("Posicao %i: %i\n", i + 1, numbers[i]);
    }

    return 0;
}
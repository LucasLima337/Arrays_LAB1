#include <stdio.h>

/*
Exemplo 2: 
    1. Faça um programa em C que peça ao usuário duas notas que ele tirou;
    2. Mostre a média.
    Obs: Use somente um vetor para essas três variáveis.
*/


void main() {
    // vetor
    float notas[3];

    // recebendo duas notas de um usuário
    printf("Digite a sua primeira nota: ");
    scanf("%f", &notas[0]);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &notas[1]);

    // calculando média e armazenando dentro do vetor
    notas[2] = (notas[0] + notas[1]) / 2;

    // exibindo a média
    printf("Media final: %.2f\n", notas[2]);

    return 0;
}
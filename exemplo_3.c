#include <stdio.h>
#include <stdlib.h>

/*
1. Leia um vetor inteiro de N posições;
2. Exiba a soma total e seus valores pares.
*/

void main() {
    int length, soma = 0;
    int *numeros;

    // lendo número de posições do vetor
    printf("Digite o numero de posicoes do vetor: ");
    scanf("%i", &length);

    // alocando a memória dinamicamente
    numeros = (int*) malloc(length * sizeof(int));

    // atribuindo valores ao vetor e somando
    for (int i = 0; i < length; i++) {
        printf("Digite o valor da posicao %i: ", i + 1);
        scanf("%i", &numeros[i]);
        
        soma += numeros[i];
    }

    // exibindo os valores pares
    printf("\nValores pares: | ");
    for (int i = 0; i < length; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%i | ", numeros[i]);
        }
    }

    // exibindo a soma total
    printf("\nSoma total: %i", soma);
    return 0;
}
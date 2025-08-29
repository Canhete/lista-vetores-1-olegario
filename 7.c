/* 07 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva raiz média
quadrática. */

#include <stdio.h>

void main() {
    int i, num[100];
    float media = 0, raiz;

    for (i = 0; i < 100; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
        media += num[i] * num[i];
    }

    media /= 100;
    raiz = sqrt(media);
    printf("Raiz média quadrática: %.2f\n", raiz);
}
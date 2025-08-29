/* 05 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva média
aritmética. */

#include <stdio.h>

void main() {
    int num[100], i;
    float media, soma = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }

    media = soma / 100;
    printf("A média aritmética é: %.2f\n", media);
}
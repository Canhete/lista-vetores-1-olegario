/*  08 - Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Calcule e escreva um terceiro
conjunto fruto da intercalação dos dois primeiros. */

#include <stdio.h>

void main(){
    int i, conj1[30], conj2[30], intercalado[60];

    for(i=0; i<30; i++){
        printf("Digite o %dº número do primeiro conjunto: ", i+1);
        scanf("%d", &conj1[i]);
    }
    for(i=0; i<30; i++){
        printf("Digite o %dº número do segundo conjunto: ", i+1);
        scanf("%d", &conj2[i]);
    }

    for(i=0; i<30; i++){
        intercalado[i*2] = conj1[i]; // Par
        intercalado[i*2+1] = conj2[i]; // Ímpar
    }

    printf("\n\t--- Resultados ---");
    printf("\nPrimeiro conjunto: ");
    for(i=0; i<30; i++){
        printf("%d ", conj1[i]);
    }

    printf("\nSegundo conjunto: ");
    for(i=0; i<30; i++){
        printf("%d ", conj2[i]);
    }

    printf("\nConjunto intercalado: ");
    for(i=0; i<60; i++){
        printf("%d ", intercalado[i]);
    }
}
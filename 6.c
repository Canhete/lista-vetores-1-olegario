/* 06 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva o desvio
médio. */
/* Ler os 100 nums --> Calcular média --> Comparar cada num (fórmula do desvio médio)*/

#include <stdio.h>

void main(){
    int num[100], i;
    float media=0, desvio=0;
    for(i=0; i<100; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num[i]);
        media += num[i];
    }

    media /= 100;

    for(i=0; i<100; i++){
        if(num[i] > media){
            desvio += (num[i] - media);
        } else {
            desvio += (media - num[i]);
        }
    }

    desvio /= 100;
    printf("O desvio médio é: %.2f\n", desvio);
}
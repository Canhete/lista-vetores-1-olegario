/* Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva a amplitude
total deste conjunto. */

#include <stdio.h>

void main(){
    int numeros[100], i, maior, menor, amplitude;

    for(i=0; i<100; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for(i=1; i<100; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    amplitude = maior - menor;
    printf("A amplitude total do conjunto é: %d\n", amplitude);
}
/* 02 - Implementar um algoritmo que leia um conjunto de 50 elementos inteiros e os imprima em ordem
contrária da que foi lida. */

#include <stdio.h>

void main(){
    int i, numeros[50];

    for(i = 0; i < 50; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Números na ordem inversa:\n");
    for(i = 49; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }
}
/* 03 - Fazer um algoritmo que leia um conjunto de 100 números inteiros; leia também um valor para
variável x e verifique se x existe no conjunto lido. */

#include <stdio.h>

void main(){
    int numeros[100], x, i;

    for(i=0; i<100; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Digite o valor para x: ");
    scanf("%d", &x);

    for(i=0; i<100; i++){
        if(numeros[i] == x){
            printf("O valor de x (%d) existe no conjunto.\n", x);
            return;
        }
    }
}
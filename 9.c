/* 09 - Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Ambos os conjuntos já foram
lidos ordenados. Calcule e escreva um terceiro conjunto fruto da intercalação, também ordenada, dos dois
primeiros. */

#include <stdio.h>
const int max = 30;

void main() {
    int conjunto1[max], conjunto2[max], conjunto3[2*max];
    int i, j;
    int tamanhoInter = 0;

    for (i = 0; i < max; i++) {
        printf("Digite o %dº número do primeiro conjunto: ", i + 1);
        scanf("%d", &conjunto1[i]);
    }

    for (i = 0; i < max; i++) {
        printf("Digite o %dº número do segundo conjunto: ", i + 1);
        scanf("%d", &conjunto2[i]);
    }

    // Ordenação do primeiro conjunto com Bubble Sort
    for (i = 0; i < max; i++) {
        for (j = 0; j < max - i; j++) {
            if (conjunto1[j] > conjunto1[j + 1]) {
                int temp = conjunto1[j];
                conjunto1[j] = conjunto1[j + 1];
                conjunto1[j + 1] = temp;
            }
        }
    }

    // Ordenação do segundo conjunto com Bubble Sort
    for (i = 0; i < max; i++) {
        for (j = 0; j < max - i; j++) {
            if (conjunto2[j] > conjunto2[j + 1]) {
                int temp = conjunto2[j];
                conjunto2[j] = conjunto2[j + 1];
                conjunto2[j + 1] = temp;
            }
        }
    }

    // Encontrar elementos comuns
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            if (conjunto1[i] == conjunto2[j]) {
                // Verificar se já está no resultado
                int jaExiste = 0;
                for (int k = 0; k < 2*max; k++) {
                    if (conjunto3[k] == conjunto1[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                
                // Se não existe, adicionar
                if (!jaExiste) {
                    conjunto3[j] = conjunto1[i];
                    tamanhoInter++;
                }
                break; // Sair do loop interno
            }
        }
    }
    
    // Imprimir resultados
    printf("\nConjunto 1 ordenado: ");
    for (int i = 0; i < max; i++) {
        printf("%d ", conjunto1[i]);
    }
    
    printf("\nConjunto 2 ordenado: ");
    for (int i = 0; i < max; i++) {
        printf("%d ", conjunto2[i]);
    }
    
    printf("\nIntersecção: ");
    for (int i = 0; i < tamanhoInter; i++) {
        printf("%d ", conjunto3[i]);
    }
}
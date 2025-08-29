/* 01 - Fazer um algoritmo que leia a nota de 10 alunos de uma disciplina. Calcule e escreva o número de
alunos que tiveram notas superior à média da turma. */

#include <stdio.h>

void main(){
    int i, contador = 0;
    float notas[10], media = 0;

    for(i = 0; i < 10; i++){
        printf("Digite a nota do %d aluno: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= 10;

    for(i = 0; i < 10; i++){
        if(notas[i] > media){
            contador++;
        }
    }

    printf("A média da turma foi: %.2f\n", media);
    printf("O número de alunos com nota acima da media foi: %d\n", contador);
}
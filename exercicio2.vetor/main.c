/******************************************************************************
Atividade 2 Faça um programa que leia a nota de 20 alunos da turma e mostre
as que são iguais ou superiores à média da turma.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float alunos[10], media, soma=0;
    int posicao;
    
    for (posicao=0;posicao<10;posicao++){
        printf("\n Aluno %d - Digite a nota da turma: ", posicao+1);
        scanf(" %f", &alunos[posicao]);
        
        soma = soma+alunos[posicao];
    }
    
    media = soma/10;
    
    printf("\nA média da turma é: %.2f", media);
    
    for(posicao=0;posicao<10;posicao++){
        if (alunos[posicao]>=media){
        printf("\nAluno %d acima da média, com a nota: %.2f", posicao+1, alunos[posicao]);
        }
    }
    
    return 0;
}

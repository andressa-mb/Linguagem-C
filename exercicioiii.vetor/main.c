/******************************************************************************
III. O comando declara um vetor para armazenar notas de 10 alunos de uma turma e inicializa cada nota com 0 (zero)
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int posicao;
    
    for (posicao=0; posicao<10;posicao++){
        printf ("Digite sua nota: \n");
        scanf("%d", &vet[posicao]);
    }

    for (posicao=0;posicao<10;posicao++){
        printf("\n Item da posição %d, do vetor: %d", posicao, vet[posicao]);
    }
    return 0;
}



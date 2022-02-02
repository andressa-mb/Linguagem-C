/******************************************************************************
VI. O trecho de código declara e lê (scanf) as notas de 80 alunos de uma turma:
VII. O trecho de código exibe no dispositivo de saída (printf) as notas dos 80 alunos da turma:
*******************************************************************************/
#include <stdio.h>

int main()
{
int posicao, vet[10];

    for(posicao=0;posicao<10;posicao++){
        printf("\nDigite sua nota: ");
        scanf("%d", &vet[posicao]);
    }
    
    for(posicao=0;posicao<10;posicao++){
        printf("\n No índice %d tem a nota: %d", posicao, vet[posicao]);
    }
    return 0;
}

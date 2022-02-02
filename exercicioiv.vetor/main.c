/******************************************************************************
IV. O comando declara um vetor para armazenar notas de 10 alunos de uma turma e inicializa cada nota com 0 (zero).
Se fossem 100 alunos em vez de 10, seria inviável inicializar o vetor com 100 zeros entre as chaves. Se fossem 500
alunos, mais inviável ainda.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int posicao, vet[100];
    
    for (posicao=0;posicao<100;posicao++){
        vet[posicao] = 0;
        printf("Digite sua nota: ");
        scanf(" %d", &vet[posicao]);
    }
    for (posicao=0;posicao<100;posicao++){
        printf("\n A posição %d tem a nota: %d", posicao, vet[posicao]);
    }
    
    return 0;
}

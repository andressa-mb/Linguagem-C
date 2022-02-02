#include <stdio.h>

int main()
{
/*I. O comando declara um vetor para armazenar notas de 10 alunos de uma turma:*/
    
float vet[10]={10, 7.5, 6.5, 8, 5.5, 4.5, 7, 4, 2, 9};
int posicao;

for (posicao=0;posicao<10;posicao++){
    printf("\n Índice %d do vetor: %.2f", posicao, vet[posicao]);
}
    return 0;
}


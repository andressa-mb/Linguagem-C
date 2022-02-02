#include <stdio.h>

int main()
{
/*VIII. O trecho de código calcula e mostra a média da turma (soma das notas dos alunos dividida por 9,
que é a quantidade de alunos):*/
float soma;
float vet[9]= {7, 8, 9, 10, 5, 4, 7, 7.5, 6.5};
int posicao;


soma=0;
for (posicao=0;posicao<10;posicao++)
{
soma=soma+vet[posicao];
}
printf("media = %.2f ",soma/10);

    return 0;
}

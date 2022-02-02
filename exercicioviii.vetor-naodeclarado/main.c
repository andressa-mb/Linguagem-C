/******************************************************************************
VIII. O trecho de código calcula e mostra a média da turma (soma das notas dos alunos dividida por 80, que é a
quantidade de alunos):
*******************************************************************************/
#include <stdio.h>

int main()
{
float media, vetor[80], soma=0;
int posicao;

for (posicao=0;posicao<80;posicao++){
    printf("\nDigite as notas da turma:");
    scanf("%f", &vetor[posicao]);
    soma = soma+vetor[posicao];
    media = soma/10;
}
printf ("média %f", media);
   
    return 0;
}

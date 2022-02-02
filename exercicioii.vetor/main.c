/******************************************************************************
II. O comando declara um vetor para armazenar o sexo – masculino (M) ou feminino (F) – de 50 alunos de uma turma
ou, ainda, para representar o nome de uma pessoa com até 49 caracteres
*******************************************************************************/
#include <stdio.h>

int main()
{
char sexo, vet[5];
int posicao, quantidadeF=0, quantidadeM=0;

    for (posicao=0;posicao<5;posicao++){
        printf("\nDigite 'f' para feminino e 'm' para masculino:");
        scanf(" %c", &sexo);
        if (sexo=='f'){
            vet[posicao] = sexo;
            quantidadeF++;
        }else{
            vet[posicao] = sexo;
            quantidadeM++;
        }
    }
    printf("Na turma há %d do sexo feminino e %d do sexo masculino.\n", quantidadeF, quantidadeM);
    for (posicao=0;posicao<5;posicao++){
        printf("%c \n", vet[posicao]);
    }
    return 0;
}



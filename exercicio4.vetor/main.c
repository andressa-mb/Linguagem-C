/******************************************************************************
Atividade 4 Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:
Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma
posição do primeiro vetor.
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na
mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente.
*******************************************************************************/
#include <stdio.h>

int main()
{
int num1[6], num2[6], posicao;

for (posicao=0;posicao<6;posicao++){
    printf("\n Digite os números: ");
    scanf(" %d", &num1[posicao]);
    
    if (num1[posicao]%2==0){
        num2[posicao]=num1[posicao]+1;
    }else {
        num2[posicao]=num1[posicao]-1;
    }
}
    printf("Os elementos do num1 são: \n");
    
for (posicao=0;posicao<6;posicao++){
    printf("%d \n", num1[posicao]);
}
printf("Os elementos do num2 são: \n");
for (posicao=0;posicao<6;posicao++){
    printf("%d \n", num2[posicao]);
}
    return 0;
}


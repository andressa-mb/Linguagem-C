/******************************************************************************
Atividade 1 Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.
*******************************************************************************/
#include <stdio.h>

int main()
{
int num[100], posicao;

    for (posicao=0;posicao<100;posicao++){
        printf("\nDigite um número %d de 10: ", posicao+1);
        scanf("%d", &num[posicao]);
    }
    printf("\nOs números na ordem inversa: ");
    
    for (posicao=99;posicao>=0;posicao--){
        printf("%d", num[posicao]);
    }

    return 0;
}




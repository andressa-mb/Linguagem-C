/******************************************************************************
Atividade 5 Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do
vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.
******************************************************************************/
#include <stdio.h>

int main(){
    
    int num[6], num2[3], posicao, cont;
    
    for(posicao=0;posicao<6;posicao++){
        printf("Digite um número: ");
        scanf(" %d", &num[posicao]);
    }
    for(posicao=0;posicao<3;posicao++){
        printf("Digite um número para comparação: ");
        scanf(" %d", &num2[posicao]);
    }
    for(posicao=0;posicao<3;posicao++){
        for(cont=0;cont<6;cont++){
            if(num2[posicao]==num[cont]){
                printf("Número %d está na posição %d da Tabela 1.\n", num2[posicao], cont+1);
            }
        }
    }
    
    
    
    return 0;
}


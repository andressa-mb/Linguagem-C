/******************************************************************************
V. O comando declara um vetor para armazenar a quantidade de vezes que cada vogal aparece em um texto e
inicializar com 0 (zero) cada quantidade. São 5 vogais. Então, precisamos de 5 posições no vetor.
*******************************************************************************/
#include <stdio.h>

int main()
{
char vet[5]={'a','e','i','o','u'};
int posicao;

for (posicao=0;posicao<5;posicao++){
    printf("\nNa posição %d do vetor contém a vogal: %c", posicao, vet[posicao]);
}
    return 0;
}


/******************************************************************************
IX. O trecho de código lê uma cadeia de 8 caracteres e mostra o texto invertido. Por exemplo, ao ler “programa”, o
algoritmo deve mostrar “amargorp”:
*******************************************************************************/
#include <stdio.h>

int main()
{
char nome[8];
int posicao;

    printf("Digite um nome: ");
    scanf("%s", nome); //para poder ler o nome inteiro, se usasse o %c ele não consegue ler todos os caracteres;
    for (posicao=8;posicao>=0;posicao--){
        printf("%c", nome[posicao]);
    }

    return 0;

/*Observe que o programa lê a cadeia de uma vez, usando %s, e exibe caractere por caractere para mostrar do final ao
início, invertendo a cadeia original.*/
}


/******************************************************************************
Atividade 4 Faça um algoritmo que leia dados e armazene em uma matriz 3x3
de números inteiros. Em seguida, mostre os elementos que sejam iguais
ao maior número armazenado na matriz.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat[3][3], contL, contC, maior=0, igual=0;
    
    for (contL=0;contL<3;contL++){
        for (contC=0;contC<3;contC++){
           printf("\nDigite um número na posição [%d][%d]: ", contL, contC);
           scanf(" %d", &mat[contL][contC]);
           if (mat[contL][contC]>maior){
               maior=mat[contL][contC];
           }
        }
    }
    printf("\nMatriz: \n");
    for (contL=0;contL<3;contL++){
        for (contC=0;contC<3;contC++){
            if (mat[contL][contC]==maior){
                igual++;
            }
            printf("%d ", mat[contL][contC]);
        }
        printf("\n");
    }
    printf ("\nMaior: %d", maior);
    printf("\nQuantos elementos são iguais ao maior número: %d", igual);

    return 0;
}


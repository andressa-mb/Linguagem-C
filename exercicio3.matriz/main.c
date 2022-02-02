/******************************************************************************
Atividade 3 Faça um algoritmo que leia uma matriz 4x4 de números inteiros.
Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1,
e as colunas são as linhas da matriz 1.
*******************************************************************************/
#include <stdio.h>

int main(){
    
    int mat[4][4], contL, contC; 
    
    for (contC=0;contC<4;contC++){
        for(contL=0;contL<4;contL++){
            printf("\nDigite um número na posição [%d][%d]: ", contL, contC);
            scanf(" %d", &mat[contL][contC]);
        }
    }
    printf("\nMatriz 1: \n");
    for (contC=0;contC<4;contC++){
        for(contL=0;contL<4;contL++){
            printf(" %d", mat[contL][contC]);
        }
        printf ("\n");
    }
    
    printf("\nMatriz 2: \n");
    for (contL=0;contL<4;contL++){
        for (contC=0;contC<4;contC++){
            printf (" %d", mat[contL][contC]);
        }
        printf("\n");
    }

    return 0;
}

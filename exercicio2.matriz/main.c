/******************************************************************************
Atividade 2 Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4.
Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).
Na diagonal principal, os elementos têm linha = coluna: [0][0], [1][1], [2][2], [3][3].
*******************************************************************************/
#include <stdio.h>

int main(){
    
    int mat[4][4], contL, contC;
    
    for(contL=0;contL<4;contL++){
        for(contC=0;contC<4;contC++){
            if(contL==contC){
                mat[contL][contC]=0;
                printf("\nDiagonal principal [%d][%d], posição recebe 0.", contL, contC);
            }else {
                printf("\nDigite um número para a posição [%d][%d]: ", contL, contC);
                scanf(" %d", &mat[contL][contC]);
            }
        }
    }
    printf("\nMatriz: \n");
    for(contL=0;contL<4;contL++){
        for(contC=0;contC<4;contC++){
            printf("%d ", mat[contL][contC]);
        }
        printf("\n");
    }

    return 0;
}

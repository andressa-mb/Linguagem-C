/******************************************************************************
Atividade 5 Faça um programa que gere uma matriz 5x5, conforme esta sequência:
0 1 1 1 1 
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
1 1 1 1 0
*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat[5][5], contL, contC;
    
    printf("Matriz gerada: \n");
    for (contL=0;contL<5;contL++){
        for (contC=0;contC<5;contC++){
            mat[contL][contC]=1;
            if (contL==contC){
                mat[contL][contC]=0;
            }
            printf("%d ", mat[contL][contC]);
        }
        printf("\n");
    }
    return 0;
}
/******************************************************************************
Atividade 1 Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4.
Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num[3][4], contL, contC, par=0, impar=0;
    
    for(contL=0;contL<3;contL++){
        for(contC=0;contC<4;contC++){
            printf("\nDigite o número na posição [%d][%d] da matriz: \n", contL+1, contC+1);
            scanf("%d", &num[contL][contC]);
        }
    }
    
    for(contL=0;contL<3;contL++){
        for(contC=0;contC<4;contC++){
            printf("%d ", num[contL][contC]);
            if (num[contL][contC]%2==0){
                par++;
            }else {
                impar++;
            }
        }
        printf ("\n");
    }
    
    printf("\n Quantidade números pares: %d", par);
    printf("\n Quantidade números ímpares: %d", impar);
    
    return 0;
}


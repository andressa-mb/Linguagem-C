/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//2º problema: desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

    int num, maior, cont;
    maior = 0;

    for (cont=1; cont<=15; cont++){
        printf("Digite um número: \n");
        scanf("%d", &num);
        if (num>maior){
            maior=num;
        }
    }
    
    printf("O maior número lido foi: %d", maior);
    
    return 0;
}



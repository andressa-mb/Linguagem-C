/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*1º Exemplo: desenvolver um programa que leia uma sequência de números inteiros terminada
em 0 e mostre cada número lido (exceto o 0).*/
    
    int num, cont;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while (num !=0){
        printf("O número lido foi: %d \n\n", num);
        printf("Digite um número: ");
        scanf("%d", &num);
    }

    return 0;
}

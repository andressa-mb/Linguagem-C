/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*1º problema: desenvolva um programa que leia 15 números inteiros e positivos e mostre o
maior deles.*/

    int num, maior, cont;
    maior=0;
    

    cont=1;
    while (cont<=15){
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num>maior){
        maior=num;
        }
        
        cont++;
    }
    
    printf("O maior número é: %d", maior);
    
    return 0;
}


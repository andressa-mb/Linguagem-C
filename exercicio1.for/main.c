/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//1º problema: desenvolva um programa que leia um número e o mostre 20 vezes.

    int num, cont;
        
    printf("Digite um número: \n");
    scanf("%d", &num);

    for (cont=1; cont<=20; cont++){

    printf("O número lido foi: %d \n", num);
    }


    return 0;
}


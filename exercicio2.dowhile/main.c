/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*2º problema: desenvolva um programa que leia uma sequência de números, podendo terminar
com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o
número seja par, ou seu antecessor se o número for ímpar.*/

    int num, par, impar;
    
    do{
    printf("Digite um número: \n");    
    scanf("%d", &num);
    
    if (num!=0 && num!=9){
        if(num%2==0){
        par = num+1;
        printf("O número lido: %d é par. E o seu sucessor é: %d\n\n", num, par);
        }else {
            impar = num-1;
            printf("O número lido: %d é ímpar e o seu antecessor é: %d\n\n", num, impar);
        }
    }
    
    }while (num!=0 && num!=9);
    

    return 0;
}


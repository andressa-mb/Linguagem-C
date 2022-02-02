/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*6º problema: desenvolva um programa que leia um número N e, em seguida, uma lista de N
números inteiros. Este programa também deve calcular e mostrar a soma dos números pares e
dos números ímpares da lista.*/

    int num, listaN, somaPar, somaImpar, cont;
    somaPar = 0;
    somaImpar = 0;
    
    printf("Bem vindo aos MeusEstudos.com \n\n");
    printf("Digite a quantidade de números da lista: \n");
    scanf("%d", &listaN);

    for(cont=1; cont<=listaN; cont++){
        printf("Digite um número: \n");
        scanf("%d", &num);
            if (num%2==0){
        somaPar = somaPar + num;
    }else {
        somaImpar = somaImpar + num;
    }
    }
    printf("A soma dos números pares é: %d \n", somaPar);
    printf("A soma dos números ímpares é: %d", somaImpar);
    

    return 0;
}

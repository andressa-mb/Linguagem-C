/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*5º problema: desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos
salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50
funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste
sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser
apresentado na tela.
    */
    
    float porcentReajuste, salario, salarioReajuste, maior;
    int cont;
    
    maior = 0;
    
    printf("Reajustes da empresa MeusEstudos.com do ano de 2022 \n\n");
    
    printf("Valor do Reajuste 2022: \n");
    scanf("%f", &porcentReajuste);
    
    for (cont = 1; cont<=5; cont++){ //50
    printf("Salário do Funcionário %d: \n", cont);
    scanf("%f", &salario);
    
    salarioReajuste = salario+(salario*porcentReajuste)/100;

    printf("Salário Reajustado do Funcionário %d: %.2f \n\n", cont, salarioReajuste);
        
        if(salarioReajuste>maior){
            maior = salarioReajuste;
        }
    }
    printf ("O maior salário é: %.2f \n", maior);
    return 0;
}

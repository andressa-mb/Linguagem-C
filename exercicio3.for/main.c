/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*3º problema: desenvolva um programa que leia o salário de 10 funcionários de uma empresa,
calcule e mostre o maior salário e a média salarial da empresa.*/

float salario, maior, media, soma;
int cont;

maior = 0;
soma = 0;

printf("Salários da empresa MeusEstudos.com \n\n");

for (cont = 1; cont <= 10; cont++){
    printf("Digite o salário do trabalhador %d: \n", cont);
    scanf("%f", &salario);
    
    if (salario > maior){
        maior = salario;
    }
    
    soma = soma+salario;
    media = soma/10;
}

printf("A soma dos salários é: %.2f \n", soma);
printf("A média salarial é: %.2f \n", media);
printf("O maior salário é: %.2f \n", maior);

return 0;

}


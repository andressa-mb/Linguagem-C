/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/* 4º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a
média aritmética e a situação de aprovação de cada um deles. Lembre-se que apenas a média
igual ou acima de 7 aprova o aluno. */
    
    float nota1, nota2, nota3, media;
    int cont;
    
    printf("Notas dos Alunos da Escola MeusEstudos.com \n\n");
    
    for (cont=1; cont<=40; cont++){
    printf("ALUNO %d \n",cont);
    printf("Nota AV1: \n");
    scanf("%f", &nota1);
    printf("Nota AV2: \n");
    scanf("%f", &nota2);
    printf("Nota AV3: \n");
    scanf("%f", &nota3);
    
    media = (nota1+nota2+nota3)/3;
    
    if (media>=7){
        printf("Parabéns, o Aluno %d foi APROVADO, com a média %.2f! \n\n", cont, media);
    }else{
        printf("Infelizmente, o Aluno %d foi REPROVADO, com a média %.2f \n\n", cont, media);
    }
    }
    return 0;
}

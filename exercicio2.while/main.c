/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*2º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a
média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média
igual ou acima de 7 aprova o aluno.*/

    float nota1, nota2, nota3, media;
    int alunos;
    
    alunos=1;
    
    printf ("Notas Escola MeusEstudos.com \n\n");
    
    while(alunos<=40){
        printf ("Aluno %d - Nota AV1: \n", alunos);
        scanf("%f", &nota1);
        printf ("Aluno %d - Nota AV2: \n", alunos);
        scanf("%f", &nota2);
        printf ("Aluno %d - Nota AV3: \n", alunos);
        scanf("%f", &nota3);
        
        media = (nota1+nota2+nota3)/3;
        
        if (media>=7){
            printf("Parabéns, você foi APROVADO, com a média %.2f \n", media);
        }else {
            printf("Infelizmente, você foi REPROVADO, com a média %.2f \n", media);
        }
        
        alunos++;
    }

    return 0;
}

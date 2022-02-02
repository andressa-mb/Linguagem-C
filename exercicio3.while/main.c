/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*3º problema: desenvolver um programa que leia uma sequência de letras (a... z) terminada em
ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.*/

    char letra;
    int conta=0, conte=0, conti=0, conto=0, contu=0;
    
    printf("Digite uma letra minúscula (a..z) a cada linha e tecle ENTER: ");
    scanf("%c", &letra);
    
    while(letra!='.'){
        switch (letra){
            case 'a':
            conta++;
            break;
            
            case 'e':
            conte++;
            break;
            
            case 'i':
            conti++;
            break;
            
            case 'o':
            conto++;
            break;
            
            case 'u': 
            contu++;
            break;
        }
        scanf("%c", &letra);
    }
    
    printf("Total de vogais 'a': %d \n", conta);
    printf("Total de vogais 'e': %d \n", conte);
    printf("Total de vogais 'i': %d \n", conti);
    printf("Total de vogais 'o': %d \n", conto);
    printf("Total de vogais 'u': %d \n", contu);
    
    return 0;
}

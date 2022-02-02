/******************************************************************************
Atividade 3 Leia uma sequência de letras, terminada na letra (”z”),
e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.
Estrutura de dados: O vetor vai armazenar 5 números inteiros. Cada posição do vetor vai acumular a quantidade de
vezes que cada vogal (A, E, I, O, U) apareceu. O índice 0 (zero) corresponde ao total de vogais “A”, o índice 1
corresponde à vogal “E”, e assim sucessivamente, até o índice 4, que vai armazenar a vogal “U”.
*******************************************************************************/
#include <stdio.h>

int main()
{
int vogal[5]={0,0,0,0,0}, posicao;
char letra;

    printf("\nDigite UMA letra e clique enter: ");
while(letra!='z'){
    scanf("%c", &letra);
    
    switch(letra){
        case 'a':
        vogal[0]++;
        break;
        
        case 'e':
        vogal[1]++;
        break;
        
        case 'i':
        vogal[2]++;
        break;
        
        case 'o':
        vogal[3]++;
        break;
        
        case 'u':
        vogal[4]++;
        break;
    }

}
printf ("\n Quantidade de cada vogal em ordem: ");

for (posicao=0;posicao<5;posicao++){
    printf("%d", vogal[posicao]);
}

    return 0;
}


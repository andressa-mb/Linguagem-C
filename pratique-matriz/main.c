/******************************************************************************
Pratique+ 
Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 alunos,
existe a necessidade de mostrar:
A média de cada prova.
A média de cada aluno.
A média da turma.
*******************************************************************************/
#include <stdio.h>

int main(){
    
    int cont, contP;
    float mediaTurma, mediaP1, mediaP2, mediaP3, mediaAluno, totalAluno=0, alunos[10][3], totalTurma=0, totalP1=0, totalP2=0, totalP3=0;
    
    for(cont=0;cont<10;cont++){
        for(contP=0;contP<3;contP++){
            printf("Digite a nota %d do aluno %d: ", contP+1, cont+1);
            scanf(" %f", &alunos[cont][contP]);
            
            totalTurma = totalTurma+alunos[cont][contP];
            
            switch(contP){
                case 0:
                    totalP1=totalP1+alunos[cont][contP];
                    break;
                case 1:
                    totalP2=totalP2+alunos[cont][contP];
                    break;
                case 2:
                    totalP3=totalP3+alunos[cont][contP];
                    break;
            }
        }
    }
    
    mediaTurma = totalTurma/30;
    mediaP1 = totalP1/10;
    mediaP2 = totalP2/10;
    mediaP3 = totalP3/10;
    
    printf ("\nMédia da turma: %.2f \n", mediaTurma);
    printf ("Média P1: %.2f\n", mediaP1);
    printf ("Média P2: %.2f\n", mediaP2);
    printf ("Média P3: %.2f\n", mediaP3);
    
    for(cont=0;cont<10;cont++){
        for(contP=0;contP<3;contP++){
            totalAluno = totalAluno+alunos[cont][contP];
        }
        
        mediaAluno = totalAluno/3;
        printf("Média do aluno %d: %.2f.\n", cont+1, mediaAluno);
        
        totalAluno=0;
        mediaAluno=0;
        
    }
    

    return 0;
}

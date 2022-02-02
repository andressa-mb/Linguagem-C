
#include <stdio.h>

int main()
{
/*1º problema: leia cinco números inteiros e positivos e mostre o maior deles.*/

    int num, maior, cont=1;
    
    do {
        printf("Digite um número: \n");
        scanf("%d", &num);
        
        if (num>maior){
            maior=num;
        }
        cont++;
    }
    while(cont<=5);
    
    printf("O maior número foi: %d \n", maior);

    return 0;
}

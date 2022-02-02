
#include <stdio.h>

int main()
{
/*3º problema (USANDO O WHILE): desenvolva um programa que leia o salário bruto de 15 funcionários de uma
empresa, calcule e exiba o salário líquido de cada funcionário. Lembre-se que o salário líquido
é calculado abatendo o imposto do salário bruto, com base nesta tabela de imposto. Ao final,
mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários

TABELA DE IMPOSTO: 
1 R$ 0,00 R$ 999,00 10%
2 R$ 999,01 R$ 1.999,00 15%
3 R$ 1.999,01 R$ 9.999,00 20%
4 R$ 9.999,01 R$ 99.999,00 25%
5 Acima R$ 99.999,01 --- 30%
*/

    float  salarioBruto, salarioLiq, imposto, totalBruto=0, totalLiq=0, totImp=0;
    int cont=1;
    
    while (cont<=15){
        printf("Digite seu salário: ");
        scanf("%f", &salarioBruto);
        
        if (salarioBruto<=999.00){
            imposto = salarioBruto*0.10;
        }else if(salarioBruto<=1999.00){
            imposto = salarioBruto*0.15;
        }else if(salarioBruto<=9999.00){
            imposto = salarioBruto*0.20;
        }else if (salarioBruto<=99999.00){
            imposto = salarioBruto*0.25;
        }else {
            imposto = salarioBruto*0.30;
        }
        
        salarioLiq = salarioBruto-imposto;
        
        printf("O salário líquido do funcionário %d é: R$ %.2f e foi descontado R$ %.2f de imposto. \n\n", cont, salarioLiq, imposto);
        
        totalLiq = salarioLiq+totalLiq;
        totalBruto = salarioBruto+totalBruto;
        totImp = imposto+totImp;
        
        cont++;
    }
    
    printf("O total de salário líquido: %.2f \n", totalLiq);
    printf("O total de salário bruto: %.2f \n", totalBruto);
    printf("O total de imposto: %.2f \n", totImp);
    
    
    return 0;
}



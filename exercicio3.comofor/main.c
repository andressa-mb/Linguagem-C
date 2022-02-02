#include <stdio.h>

int main()
{
/*3º problema (USANDO O FOR): desenvolva um programa que leia o salário bruto de 15 funcionários de uma
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

float salarioBruto, salarioLiquido, imposto, totalBruto, totalLiquido, totalImp;
int cont;

totalLiquido = 0;
totalBruto = 0;
totalImp = 0;


for (cont=1; cont <=15; cont++){
    printf("Funcionário %d - digite seu salário bruto: \n", cont);
    scanf("%f", &salarioBruto);
    
    if (salarioBruto<=999.00){
        imposto = salarioBruto*0.10;
    }else if(salarioBruto<=1999.00){
        imposto = salarioBruto*0.15;
    } else if(salarioBruto<=9999.00){
        imposto = salarioBruto*0.20;
    }else if (salarioBruto<=99999.00){
        imposto = salarioBruto*0.25;
    }else {
        imposto = salarioBruto*0.30;
    }
    salarioLiquido = salarioBruto-imposto;
    
    printf("O salário líquido do Funcionário é: R$ %.2f e teve %.2f de imposto \n\n", salarioLiquido, imposto);
    
    totalLiquido = totalLiquido+salarioLiquido;
    totalBruto = totalBruto+salarioBruto;
    totalImp = totalImp+imposto;
    
}
    printf("A soma dos salários líquidos são: R$ %.2f \n", totalLiquido);
    printf("A soma dos salários brutos são: R$ %.2f \n", totalBruto);
    printf("A soma dos impostos são: R$ %.2f \n", totalImp);

    return 0;
}



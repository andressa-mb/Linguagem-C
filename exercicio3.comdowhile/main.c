#include <stdio.h>

int main()
{
/*3º problema (USANDO O DO WHILE): desenvolva um programa que leia o salário bruto de 15 funcionários de uma
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
float salBruto, salLiq, imposto, totImp=0, totBruto=0, totLiq=0;
int cont=1;

do {
    printf("Digite seu salário: \n");
    scanf("%f", &salBruto);
    
    if (salBruto<=999.00){
        imposto = salBruto*0.10;
    }else if (salBruto<=1999.00){
        imposto = salBruto*0.15;
    }else if (salBruto<=9999.00){
        imposto = salBruto*0.20;
    }else if(salBruto<=99999.00){
        imposto = salBruto*0.25;
    }else {
        imposto = salBruto*0.30;
    }
    salLiq = salBruto-imposto;
    
    printf("O salário líquido é: R$ %.2f e o imposto foi de R$ %.2f \n", salLiq, imposto);
    
    totLiq = salLiq+totLiq;
    totBruto = salBruto+totBruto;
    totImp = imposto+totImp;
    
    cont++;
    
}while (cont<=15);


    printf("O total de salário líquido: R$ %.2f \n", totLiq);
    printf("O total de salário bruto: R$ %.2f \n", totBruto);
    printf("O total de imposto: R$ %.2f \n", totImp);

    return 0;
}


#include <stdio.h>

int main() {
    float salario_fixo, vendas, comissao, salario_total;

    printf("Digite o seu salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor total de suas vendas no mês: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;

    salario_total = salario_fixo + comissao;

    printf("O salário a receber no final do mês é: R$ %.2f\n", salario_total);

    return 0;
}

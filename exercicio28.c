#include <stdio.h>
#include <string.h>

int main() {
    char nome_vendedor[100]; 
    double salario_fixo, vendas_totais, comissao, total_receber;

    printf("Digite o nome do vendedor: ");
    fgets(nome_vendedor, sizeof(nome_vendedor), stdin);

    size_t length = strlen(nome_vendedor);
    if (length > 0 && nome_vendedor[length - 1] == '\n') {
        nome_vendedor[length - 1] = '\0';
    }

    printf("Digite o SALÁRIO FIXO: ");
    scanf("%lf", &salario_fixo);

    printf("Digite o TOTAL DE VENDAS: ");
    scanf("%lf", &vendas_totais);

    comissao = vendas_totais * 0.15;
    total_receber = salario_fixo + comissao;

    printf("TOTAL: R$ %.2lf\n", total_receber);

    return 0;
}

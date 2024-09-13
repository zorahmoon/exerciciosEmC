#include <stdio.h>

int main() {

    int codigo_peca1, num_peca1, codigo_peca2, num_peca2;
    double valor_unitario_peca1, valor_unitario_peca2;
    double valor_total;

    printf("Digite o código, número e valor unitário da peça 1: ");
    scanf("%d %d %lf", &codigo_peca1, &num_peca1, &valor_unitario_peca1);

    printf("Digite o código, número e valor unitário da peça 2: ");
    scanf("%d %d %lf", &codigo_peca2, &num_peca2, &valor_unitario_peca2);

    valor_total = (num_peca1 * valor_unitario_peca1) + (num_peca2 * valor_unitario_peca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);

    return 0;
}

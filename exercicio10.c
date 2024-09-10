#include <stdio.h>

int main() {
    int opcao, idade, ano_nascimento, ano_atual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Escolha uma opção:\n");
    printf("1 - Informar a idade\n");
    printf("2 - Informar o ano de nascimento\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        ano_nascimento = ano_atual - idade;
        printf("Você nasceu no ano de %d.\n", ano_nascimento);
    } else if (opcao == 2) {

        printf("Digite o seu ano de nascimento: ");
        scanf("%d", &ano_nascimento);

        idade = ano_atual - ano_nascimento;
        printf("Você tem %d anos.\n", idade);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}

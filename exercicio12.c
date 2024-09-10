#include <stdio.h>
#include <stdlib.h>  // Necessário para rand() e srand()
#include <time.h>    // Necessário para time()

int main(){

    int escolha_usuario, numero_usuario, numero_computador, soma;

    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo atual.
    srand(time(NULL));

    // Solicita ao usuário para escolher par ou ímpar.
    printf("Escolha:\n");
    printf("1- Par\n");
    printf("2- Ímpar\n");
    printf("Digite sua escolha (1 ou 2): ");
    scanf("%d", &escolha_usuario);

    // Verifica se a escolha é válida.
    if (escolha_usuario != 1 && escolha_usuario != 2) {
        printf("Escolha inválida! Tente novamente.\n");
        return 1;
    }

    // Solicite ao usuário que escolha um número.
    printf("Digite um número: ");
    scanf("%d", &numero_usuario);

    // O computador sorteia aleatoriamente entre 0 e 10.
    numero_computador = rand() % 11;
    printf("O computador escolheu o número: %d\n", numero_computador);

    // Calcula a soma dos dois números.
    soma = numero_usuario + numero_computador;

    // Verifica quem ganhou.
    if (soma % 2 == 0) {
        printf("A soma dos números é %d, que é Par.\n", soma);
        if (escolha_usuario == 1) {
            printf("Você ganhou!\n");
        } else {
            printf("O computador ganhou!\n");
        }
    } else {
        printf("A soma dos números é %d, que é Ímpar.\n", soma);
        if (escolha_usuario == 2) {
            printf("Você ganhou!\n");
        } else {
            printf("O computador ganhou!\n");
        }
    }

    return 0;
}

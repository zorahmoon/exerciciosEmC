#include <stdio.h>   // Biblioteca para entrada e saída padrão
#include <stdlib.h>  // Biblioteca para funções de utilidade, como rand()
#include <time.h>    // Biblioteca para manipulação de tempo, usada para inicializar o gerador de números aleatórios
#include <string.h>  // Biblioteca para manipulação de strings, usada para strcmp() e strcpy()

int main() {
    char escolha_usuario[4]; // Array para armazenar a escolha do usuário ('par' ou 'impar')
    char escolha_computador[4]; // Array para armazenar a escolha do computador ('par' ou 'impar')
    int numero_usuario;      // Variável para armazenar o número escolhido pelo usuário
    int numero_computador;   // Variável para armazenar o número sorteado pelo computador
    int soma;                // Variável para armazenar a soma dos números do usuário e do computador

    // Inicializa o gerador de números aleatórios com base no tempo atual
    // Isso garante que os números gerados sejam diferentes a cada execução do programa
    srand(time(NULL));
    
    // Solicita ao usuário que escolha "par" ou "ímpar"
    // O resultado é armazenado no array escolha_usuario
    printf("Escolha Par ou Ímpar (digite 'par' ou 'impar'): ");
    scanf("%s", escolha_usuario);
    

    printf("Escolha um número entre 0 e 10: ");
    scanf("%d", &numero_usuario);
    

    if (numero_usuario < 0 || numero_usuario > 10) {
        printf("Número inválido. Escolha um número entre 0 e 10.\n");
        return 1; // Encerra o programa com um código de erro
    }
    

    numero_computador = rand() % 11;
    

    soma = numero_usuario + numero_computador;
    

    if (strcmp(escolha_usuario, "par") == 0) {
        strcpy(escolha_computador, "impar");
    } else if (strcmp(escolha_usuario, "impar") == 0) {
        strcpy(escolha_computador, "par");
    } else {
        printf("Escolha inválida. O computador também pode escolher 'par' ou 'impar'.\n");
        return 1; 
    }
    

    printf("Número do usuário: %d\n", numero_usuario);
    printf("Número do computador: %d\n", numero_computador);
    printf("Soma: %d\n", soma);
    

    if ((soma % 2 == 0 && strcmp(escolha_computador, "par") == 0) || 
        (soma % 2 != 0 && strcmp(escolha_computador, "impar") == 0)) {

        printf("O computador ganhou!\n");
    } else {

        printf("Isso não deveria acontecer. Verifique a lógica.\n");
    }
    
    return 0; 
}
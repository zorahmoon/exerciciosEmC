#include <stdio.h>

int main() {
    int A, B, X;

    // Solicita os dois valores inteiros
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Calcula a soma de A e B
    X = A + B;

    // Imprime o resultado conforme o exemplo
    printf("X = %d\n", X);

    return 0;
}
#include <stdio.h>

int main() {
    double A, B, C, MEDIA;
    const double PESO_A = 2.0;
    const double PESO_B = 3.0;
    const double PESO_C = 5.0;
    const double SOMA_PESOS = PESO_A + PESO_B + PESO_C;

    printf("Digite o peso de A: ");
    scanf("%lf", &A);

    printf("Digite o peso de B: ");
    scanf("%lf", &B);

    printf("Digite o peso de B: ");
    scanf("%lf", &C);

    MEDIA = (A * PESO_A + B * PESO_B + C * PESO_C) / SOMA_PESOS;

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}

#include <stdio.h>

int main() {
    double A, B, MEDIA;
    const double PESO_A = 3.5;
    const double PESO_B = 7.5;
    const double SOMA_PESOS = PESO_A + PESO_B;

    printf("Digite o peso de A: ");
    scanf("%lf", &A);

    printf("Digite o peso de B: ");
    scanf("%lf", &B);

    MEDIA = (A * PESO_A + B * PESO_B) / SOMA_PESOS;

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}

#include <stdio.h>

int main() {
    double raio, area;
    const double PI = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    // Exibe a área com 4 casas decimais
    printf("A = %.4lf\n", area);

    return 0;
}

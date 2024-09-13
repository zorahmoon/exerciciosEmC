//Faça um programa que calcule e mostre o volume de uma esfera
//sendo fornecido o valor de seu raio.

#include <stdio.h>
#include <math.h> // Para usar a função pow()

int main() {
    int raio;
    double pi = 3.14159;
    double volume;

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

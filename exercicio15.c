#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

float area, raio;

printf("Digite o raio do círculo: ");
scanf("%f", &raio);

area = M_PI * raio * raio;

printf("A área do círculo é: %.2f\n", area);

return 0;

}
#include <stdio.h>

int main(){

    float altura, peso, imc;

printf("Digite a sua altura: ");
scanf("%f", &altura);

printf("Digite o seu peso: ");
scanf("%f", &peso);

imc = peso / (altura * altura);

printf("Seu IMC é de: %.2f\n", imc);

return 0;

}
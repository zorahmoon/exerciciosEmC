#include <stdio.h>

int main(){

float cm, metros;

printf("Digite um valor em metros: ");
scanf("%f", &metros);

cm = metros * 100;

printf("O calor em centímetros é: %.2f cm\n", cm);

return 0;

}
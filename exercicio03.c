#include <stdio.h>

int main(){

int n1, n2;
float n3, soma;

printf("Digite o primeiro número inteiro: ");
scanf("%d", &n1);

printf("Digite o segundo número inteiro: ");
scanf("%d", &n2);

printf("Digite um número real: ");
scanf("%f", &n3);

soma = n1 + n2 + n3;

printf("A soma de %d, %d e %.2f é: %.2f\n ", n1, n2, n3, soma);

return 0;

}
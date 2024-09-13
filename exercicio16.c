#include <stdio.h>

int main(){

float valor_hora, horas_trabalhadas, salario;

printf("Digite o valor da hora trabalhada: ");
scanf("%f", &valor_hora);

printf("Digite a quantidade de horas trabalhadas no mês: ");
scanf("%f", &horas_trabalhadas);

salario = valor_hora * horas_trabalhadas;

printf("O salário a ser recebido será de: R$ %.2f\n", salario);

return 0;

}
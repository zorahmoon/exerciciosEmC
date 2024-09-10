#include <stdio.h>

int main(){

int ano_nascimento, ano_atual, idade;

printf("Digite o seu ano de nascimento: ");
scanf("%d", &ano_nascimento);

printf("Digite o ano atual: ");
scanf("%d", &ano_atual);

idade = ano_atual - ano_nascimento;

printf("Você tem %d anos.\n", idade);

return 0;

}
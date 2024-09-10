#include <stdio.h>

int main(){

int idade, ano_nascimento, ano_atual;

printf("Digite a sua idade: ");
scanf("%d", &idade);

printf("Digite o ano atual: ");
scanf("%d", &ano_atual);

ano_nascimento = ano_atual - idade;

printf("Você nasceu no ano de %d.\n", ano_nascimento);

return 0;

}
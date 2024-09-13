#include <stdio.h>

int main(){

    float distancia, combustivel, consumo_medio;

printf("Digite o valor da distância percorrida em km: ");
scanf("%f", &distancia);

printf("Digite o total de combustível consumido: ");
scanf("%f", &combustivel);


consumo_medio = distancia/combustivel;

printf("O consumo médio do automóvel é de: %.2f km/1", consumo_medio);

return 0;

}
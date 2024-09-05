#include <stdio.h>

int main() {

    char nome[50];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Olá, %s!\n", nome);
    
    return 0;
}
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int num1, num2, soma;

    // Solicita ao usuário que insira dois números
    wprintf(L"Digite o primeiro número: ");
    wscanf(L"%d", &num1);

    wprintf(L"Digite o segundo número: ");
    wscanf(L"%d", &num2);

    // Calcula a soma
    soma = num1 + num2;

    // Exibe o resultado
    wprintf(L"A soma de %d e %d é %d\n", num1, num2, soma);

    return 0;
}

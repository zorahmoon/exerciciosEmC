#include <stdio.h>

int main() {
    float av1, av2, av3;
    float maior1, maior2, media;

    printf("Digite a nota da AV1: ");
    scanf("%f", &av1);
    printf("Digite a nota da AV2: ");
    scanf("%f", &av2);
    printf("Digite a nota da AV3: ");
    scanf("%f", &av3);

    if (av1 > av2) {
        maior1 = av1;
        maior2 = av2;
    } else {
        maior1 = av2;
        maior2 = av1;
    }

    if (av3 > maior1) {
        maior2 = maior1;
        maior1 = av3;
    } else if (av3 > maior2) {
        maior2 = av3;
    }

    media = (maior1 + maior2) / 2;

    printf("A média das duas maiores notas é: %.2f\n", media);
    if (media >= 6.0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
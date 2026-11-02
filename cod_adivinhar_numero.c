
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num, palpite;
    int dificuldade, limite;
    int tentativas = 0;

    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Facil (1 a 5)\n");
    printf("2 - Medio (1 a 20)\n");
    printf("3 - Dificil (1 a 100)\n");
    printf("Opcao: ");
    scanf("%d", &dificuldade);

    if (dificuldade == 1) {
        limite = 5;
    } else if (dificuldade == 2) {
        limite = 20;
    } else if (dificuldade == 3) {
        limite = 100;
    } else {
        printf("Opcao invalida!\n");
        return 0;
    }

    num = (rand() % limite) + 1;

    printf("\nTente adivinhar o numero de 1 ate %d!\n", limite);

    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > num) {
            printf("Seu palpite e maior que o numero sorteado.\n");
        } else if (palpite < num) {
            printf("Seu palpite e menor que o numero sorteado.\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            printf("Numero sorteado: %d\n", num);
            printf("Total de tentativas: %d\n", tentativas);
        }

    } while (palpite != num);

    return 0;
}

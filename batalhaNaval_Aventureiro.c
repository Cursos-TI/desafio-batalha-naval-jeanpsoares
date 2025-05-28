#include <stdio.h>

int main() {
    int mar[10][10] = {0};
    int i;

    printf("Tabuleiro Batalha Naval antes de posicionar os navios:\n\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }

    // Navio 1: horizontal, tamanho 3, começa na linha 2, coluna 4
    int navio1[3] = {3, 3, 3};
    for (i = 0; i < 3; i++) {
        mar[2][4 + i] = navio1[i];
    }

    // Navio 2: vertical, tamanho 3, começa na linha 6, coluna 7
    int navio2[3] = {3, 3, 3};
    for (i = 0; i < 3; i++) {
        mar[6 + i][7] = navio2[i];
    }

    // Navio 3: diagonal, tamanho 3, começa na linha 0, coluna 0
    int navio3[3] = {3, 3, 3};
    for (i = 0; i < 3; i++) {
        mar[i][i] = navio3[i];
    }

    // Navio 4: horizontal, tamanho 3, começa na linha 8, coluna 1
    int navio4[3] = {3, 3, 3};
    for (i = 0; i < 3; i++) {
        mar[6 + i][4 - i] = navio4[i];
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro Batalha Naval depois de posicionar os navios:\n\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int mar[10][10] = {0};
    int i, j;


    printf("\nTabuleiro Batalha Naval antes de usar os efeitos:\n\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }

    // efeito cruz (aparece como 1): começando na linha 7, coluna 7
    
    for (i = 5; i < 10; i++) {
        for (j = 5; j < 10; j++) {
            if (i == 7 || j == 7) {
                mar[i][j] = 1; // Preenchendo com 1 para representar o efeito cruz
            }
        }
    }

    // efeito cone (aparece como 2): começando na linha 0, coluna 2

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && j >= 1 && j <=3) || (i ==2 && j >= 0 && j <=4)) {
                mar[i][j] = 2; // Preenchendo com 2 para representar o efeito cone
            }
        }
    }

    // efeito ectaedro (aparece como 3): começando na linha 2, coluna 7

    for (i = 0; i < 5; i++) {
        for (j = 5; j < 10; j++) {
            if ((i == 0 && j == 7) || (i == 1 && j >= 6 && j <= 8) || (i ==2 && j >= 5 && j <= 9) || (i == 3 && j >= 6 && j <= 8) || (i == 4 && j == 7)) {
                mar[i][j] = 3; // Preenchendo com 2 para representar o efeito cone
            }
        }
    }
    
    // Exibe o tabuleiro

    printf("\nTabuleiro Batalha Naval depois de usar os efeitos:\n\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
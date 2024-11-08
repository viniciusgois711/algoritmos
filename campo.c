#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {0, -1, -1, 0, 0},
        {-1, 0, 0, -1, 0},
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };
    
    int auxiliar[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int linha;
    int coluna;

    printf("De qual linha voce quer abrir?\n");
    scanf("%d", &linha);

    printf("De qual coluna voce quer abrir?\n");
    scanf("%d", &coluna);

    while (matriz[linha][coluna] != -1) {
        for (int l = 0; l < 5; l++) {
            for (int c = 0; c < 5; c++) {
                int bombas = 0;

                if (l == linha && c == coluna) {
                    if (matriz[l][c] == -1) {
                        bombas = -1;
                    } else {
                        if (c != 4 && matriz[l][c + 1] == -1) {
                            bombas++;
                        }
                        if (c != 0 && matriz[l][c - 1] == -1) {
                            bombas++;
                        }
                        if (l != 4 && matriz[l + 1][c] == -1) {
                            bombas++;
                        }
                        if (l != 0 && matriz[l - 1][c] == -1) {
                            bombas++;
                        }
                        if (l != 0 && c != 0 && matriz[l - 1][c - 1] == -1) {
                            bombas++;
                        }
                        if (l != 0 && c != 4 && matriz[l - 1][c + 1] == -1) {
                            bombas++;
                        }
                        if (l != 4 && c != 0 && matriz[l + 1][c - 1] == -1) {
                            bombas++;
                        }
                        if (l != 4 && c != 4 && matriz[l + 1][c + 1] == -1) {
                            bombas++;
                        }
                    }
                    auxiliar[linha][coluna] = bombas;
                }
            }
        }

        for (int l = 0; l < 5; l++) {
            for (int c = 0; c < 5; c++) {
                printf("%d ", auxiliar[l][c]);
            }
            printf("\n");
        }

        printf("De qual linha voce quer abrir?\n");
        scanf("%d", &linha);

        printf("De qual coluna voce quer abrir?\n");
        scanf("%d", &coluna);

        while (auxiliar[linha][coluna] != 0) {
            printf("Voce ja abriu esse espaço \n");
            printf("De qual linha voce quer abrir?\n");
            scanf("%d", &linha);

            printf("De qual coluna voce quer abrir?\n");
            scanf("%d", &coluna);
        }
    }

    printf("Voce perdeu \n");

}

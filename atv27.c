#include <stdio.h>
#include <stdbool.h>

#define LINHAS 5
#define COLUNAS 5

bool encontrarCaminho(int matriz[LINHAS][COLUNAS], int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) {
        printf("(%d, %d)\n", x1, y1);
        return true;
    }

    if (x1 >= LINHAS || y1 >= COLUNAS) {
        return false;
    }

    if (encontrarCaminho(matriz, x1, y1 + 1, x2, y2)) {
        printf("(%d, %d) -> ", x1, y1);
        return true;
    }

    if (encontrarCaminho(matriz, x1 + 1, y1, x2, y2)) {
        printf("(%d, %d) -> ", x1, y1);
        return true;
    }

    return false;
}

int main() {
    int matriz[LINHAS][COLUNAS] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int x1 = 0, y1 = 0;
    int x2 = 4, y2 = 4;

    if (!encontrarCaminho(matriz, x1, y1, x2, y2)) {
        printf("Não há caminho disponível.\n");
    }

    return 0;
}

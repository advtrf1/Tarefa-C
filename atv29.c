#include <stdio.h>
#include <stdbool.h>

#define N 5
#define M 5

bool ehValido(int labirinto[N][M], int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0);
}

bool encontrarCaminho(int labirinto[N][M], int x, int y, int destinoX, int destinoY) {
    if (x == destinoX && y == destinoY) {
        labirinto[x][y] = 2;
        return true;
    }

    if (ehValido(labirinto, x, y)) {
        labirinto[x][y] = 2;

        if (encontrarCaminho(labirinto, x, y + 1, destinoX, destinoY))
            return true;

        if (encontrarCaminho(labirinto, x + 1, y, destinoX, destinoY))
            return true;

        if (encontrarCaminho(labirinto, x, y - 1, destinoX, destinoY))
            return true;

        if (encontrarCaminho(labirinto, x - 1, y, destinoX, destinoY))
            return true;

        labirinto[x][y] = 0;
        return false;
    }

    return false;
}

void imprimirLabirinto(int labirinto[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (labirinto[i][j] == 2)
                printf(" P ");
            else if (labirinto[i][j] == 1)
                printf(" # ");
            else
                printf(" . ");
        }
        printf("\n");
    }
}

int main() {
    int labirinto[N][M] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0}
    };

    int inicioX = 0, inicioY = 0;
    int destinoX = N - 1, destinoY = M - 1;

    if (encontrarCaminho(labirinto, inicioX, inicioY, destinoX, destinoY)) {
        printf("Caminho encontrado:\n");
        imprimirLabirinto(labirinto);
    } else {
        printf("Não há caminho disponível.\n");
    }

    return 0;
}

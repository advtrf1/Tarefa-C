#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int N;

bool ehSeguro(int tabuleiro[N][N], int linha, int coluna) {
	int i, j;

	for(i = 0; i < coluna; i++){
		if(tabuleiro[linha][i])
			return false;
	
	}

	for(i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) {
		if(tabuleiro[i][j])
			return false;
	
	}

	return true;

}

bool resolverNRainhas(int tabuleiro[N][N], int coluna) {
	if(coluna >= N) {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++){
				printf(" %c ", tabuleiro[i][j] ? 'Q' : '.');

			}

			printf("\n");

		}

		printf("\n");
		return true;

	}

	bool resultado = false;

	for(int i = 0; i < N; i++) {
		if (ehSeguro(tabuleiro, i, coluna)) {
			tabuleiro[i][coluna] = 1;
			resultado = resolverNRainhas(tabuleiro, coluna + 1) || resultado;
			tabuleiro[i][coluna] = 0;

		}
	
	}

	return resultado;

}

int main() {
	printf("Digite o valor de N: ");
	scanf("%d", &N);

	int tabuleiro[N][N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			tabuleiro[i][j] = 0;
		
		}

	}

	if(!resolverNRainhas(tabuleiro, 0)){
		printf("Nao ha solucao.");
	
	}

	return 0;

}

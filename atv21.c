#include <stdlib.h>
#include <stdio.h>

void gerarCombinacoes(int arr[], int dados[], int inicio, int fim, int index, int k) {
	if (index == k) {
		for (int i = 0; i < k; i++) {
		printf("%d", dados[i]);
		
		}
		
		printf("\n");
		return;
	}

	for (int i = inicio; i <= fim && fim - i + 1 >= k - index; i++) {
		dados[index] = arr[i];
		gerarCombinacoes(arr, dados, i + 1, fim, index + 1, k);
	
	}
}

void combinacoesArray(int arr[], int n, int k) {
	int dados[k];
	gerarCombinacoes(arr, dados, 0, n - 1, 0, k);

}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;

	combinacoesArray(arr, n, k);


	return 0;

}

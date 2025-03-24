#include <stdlib.h>
#include <stdio.h>

void gerarSubconjuntos(int arr[], int n, int index, int subconjunto[], int tamanhoSubconjunto){
	if (index == n) {
		printf("{ ");
		for (int i = 0; i < tamanhoSubconjunto; i++) {
			printf("%d ", subconjunto[i]);
		
		}
		printf("}\n");
		return;

	}
	subconjunto[tamanhoSubconjunto] = arr[index];
	gerarSubconjuntos(arr, n, index + 1, subconjunto, tamanhoSubconjunto + 1);
	gerarSubconjuntos(arr, n, index + 1, subconjunto, tamanhoSubconjunto);

}

void subconjuntos(int arr[], int n) {
	int subconjunto[n];
	gerarSubconjuntos(arr, n, 0, subconjunto, 0);

}

int main() {
	int arr[] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	subconjuntos(arr, n);

	return 0;

}

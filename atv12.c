#include <stdlib.h>
#include <stdio.h>

int somaArray(int arr[], int tamanho) {
	if (tamanho == 0) {
		return 0;
	
	}

	return arr[tamanho -1] + somaArray(arr, tamanho - 1);

}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int tamanho = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", somaArray(arr, tamanho));

	return 0;

}

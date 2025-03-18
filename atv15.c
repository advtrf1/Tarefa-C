#include <stdlib.h>
#include <stdio.h>

void imprimirPares(int n) {
	if (n < 0) {
		return;
	
	}

	imprimirPares(n - 1);

	if (n % 2 == 0) {
		printf("%d", n);

	}

}

int main() {
	int numero = 10;

	printf("Soma dos numeros pares de 0 ate %d: ", numero);

	imprimirPares(numero);

	printf("\n");

	return 0;

}

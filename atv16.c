#include <stdio.h>
#include <stdlib.h>

int imprimirImpares(int n) {
	if (n <= 0) {
		return 0;

	}

	if (n % 2 != 0) {
		printf("%d\n", n);

	}

	n - imprimirImpares(n - 1);

}

int main() {
	int numero = 10;

	imprimirImpares(numero);

}

#include <stdlib.h>
#include <stdio.h>

int potenciacao(int n, int x) {
	if (x == 0) {
		return 1;

	}

	else {
		return n * potenciacao(n, x - 1);

	}

}

int main() {
	int numero = 5;
	int potencia = 2;

	printf("%d\n", potenciacao(numero, potencia));

}


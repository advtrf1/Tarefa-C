#include <stdlib.h>
#include <stdio.h>

void decimalParaBinario(int n) {
	if (n == 0) {
		return;

	}

	decimalParaBinario(n / 2);

	printf("%d", n % 2);

}

int main() {
	int numero = 5;	

	printf("O numero %d em binario eh: ", numero);

	if (numero == 0) {
                printf("0\n");

        } else {
                decimalParaBinario(numero);

        }

	printf("\n");

	return 0;

}

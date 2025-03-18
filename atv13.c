#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool verificarDivisivel(int n, int divisor) {
	if (divisor == 1) {
		return false;

	}

	if (n % divisor == 0) {
		return true;

	}

	return verificarDivisivel(n, divisor - 1);

}

bool verificarPrimo(int n, int divisor) {
	if (n <= 1) {
		return false;
	
	}

	if (divisor == 1) {
		return true;

	}

	if (verificarDivisivel(n, divisor)) {
		return false;
	
	}

	return verificarPrimo(n, divisor - 1);

}

int main() {
	int numero = 7;
	int numero2 = 4;

	if(verificarPrimo(numero, numero - 1)) {
	printf("%d eh primo.\n", numero);
	
	} else {
	printf("%d nao eh primo.\n", numero);

	}

	if(verificarPrimo(numero2, numero2 - 1)) {
        printf("%d eh primo.\n", numero2);

        } else {
        printf("%d nao eh primo.\n", numero2);

        }

	return 0;

}

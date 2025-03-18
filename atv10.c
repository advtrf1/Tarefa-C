#include <stdio.h>
#include <stdlib.h>

int multiplicar(int a, int b) {
	if (b == 0) {
		return 0;
	
	}

	if (b < 0) {
		return -multiplicar(a, -b);
	
	}

	return a + multiplicar(a, b - 1);

}

int main() {
	int numero1 = 5, numero2 = 14;

	printf("%d\n", multiplicar(numero1, numero2));

	return 0;

}

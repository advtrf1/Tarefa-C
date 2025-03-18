#include <stdlib.h>
#include <stdio.h>

int fatorial(int n) {

	if (n == 1 || n == 0 ) {
	
		return 1;

	}

	else {
	
	return n * fatorial(n - 1);

	}
}

int main() {

	int numero = 5;

	printf("%d\n", fatorial(numero));

	return 0;

}

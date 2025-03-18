#include <stdio.h>
#include <stdlib.h>

int somaNaturais(int n) {
	if (n == 0) {
	return 0;
	
	}

	else {
	return n + somaNaturais(n - 1);
	
	}

}

int main() {
	int numero = 5;

	printf("%d\n", somaNaturais(numero));

}

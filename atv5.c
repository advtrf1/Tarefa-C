#include <stdlib.h>
#include <stdio.h>

int contagem(int n) {
	
	if (n < 0) {
		return 0;
	
	}

	printf("%d\n", n);
	contagem(n - 1);

}

int main() {
	int numero = 100;
	
	contagem(numero);	

	return 0;

}

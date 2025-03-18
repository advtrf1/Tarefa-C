#include <stdlib.h>
#include <stdio.h>

int somaDigitos(int n) {
	if (n == 0) {
		return 0;
	
	}

	return (n % 10) + somaDigitos(n / 10);

}

int main() {
	int numero = 54321;
	
	printf("%d\n", somaDigitos(numero));


}

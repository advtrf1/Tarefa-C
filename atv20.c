#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocar(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;

}

void permutarString(char *str, int inicio, int fim) {
	if (inicio == fim) {
		printf("%s\n", str);
	
	} else {
		for (int i = inicio; i <= fim; i++) {
		trocar(&str[inicio], &str[i]);

		permutarString(str, inicio + 1, fim);

		trocar(&str[inicio], &str[i]);
		
		}
	
	}

}

int main() {
	char str[100] = "Testando";

	int n = strlen(str);

	permutarString(str, 0, n - 1);

	return 0;	

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int verificarPalindromo(char *str, int inicio, int fim) {
	while (inicio < fim && !isalnum(str[inicio])) {
		inicio++;

	}

	while (inicio < fim && !isalnum(str[fim])) {
	fim--;

	}

	if (inicio >= fim) {
		return 1;
	
	}

	if (tolower(str[inicio]) != tolower(str[fim])) {
		return 0;

	}

	return verificarPalindromo(str, inicio + 1, fim - 1);

}

int main() {
	char str[100] = "Ovo";

	if (verificarPalindromo(str, 0, strlen(str) - 1)) {
		printf("A string eh um palindromo.\n");
	
	} else {
		printf("A string nao eh um palindromo.\n");

	}

	return 0;

}

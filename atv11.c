#include <stdlib.h>
#include <stdio.h>

int contarCaractere(char *str, char s) {
	if (*str == '\0') {
		return 0;

	}

	if (*str == s) {
		return 1 + contarCaractere(str + 1, s);

	} else {
		return contarCaractere(str + 1, s);

	}

}

int main() {
	char str[] = "Testes";
	char s = 's';

	printf("%d\n", contarCaractere(str, s));	

	return 0;

}

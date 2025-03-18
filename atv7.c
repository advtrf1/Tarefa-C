#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void inverterString(char *string, int inicio, int fim) {
	if (inicio < fim) {
		char temp = string[inicio];
		string[inicio] = string[fim];
		string[fim] = temp;

		inverterString(string, inicio + 1, fim - 1);
	}

}

int main() {
	char string[100] = "Teste";
	
	inverterString(string, 0, strlen(string) - 1);

	printf("%s\n", string);

}

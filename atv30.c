#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gerarParentesesAjuda(int n, int abrir, int fechar, char *atual, int pos, char **result, int *count) {
	if(pos == 2 * n) {
		atual[pos] = '\0';
		result[*count] = (char *)malloc(sizeof(char) * (2 * n + 1));
		strcpy(result[*count], atual);
		(*count)++;
		return;
	
	}
	if(abrir < n) {
		atual[pos] = '(';
		gerarParentesesAjuda(n, abrir + 1, fechar, atual, pos + 1, result, count);
	
	}

	if(fechar < abrir) {
		atual[pos] = ')';
		gerarParentesesAjuda(n, abrir, fechar + 1, atual, pos + 1, result, count);
	}

}

char **gerarParenteses(int n, int *returnSize) {
	int catalan = 1;
	for(int i = 1; i <= n; i++) {
		catalan = catalan * (2 * n - i + 1) / i;
	
	}

	catalan /= (n + 1);

	*returnSize = catalan;
	char **result = (char **)malloc(sizeof(char*) * catalan);
	char *atual = (char *)malloc(sizeof(char) * (2 * n + 1));
	int count = 0;

	gerarParentesesAjuda(n, 0, 0, atual, 0, result, &count);

	free(atual);
	return result;

}

int main() {
	int n;
	printf("Digite o numero de pares de parenteses: ");
	scanf("%d", &n);

	int size;
	char **combinacoes = gerarParenteses(n, &size);

	printf("Combinacoes validas para %d pares de parenteses:\n", n);
	for(int i = 0; i < size; i++) {
		printf("%s\n", combinacoes[i]);
		free(combinacoes[i]);
	
	}

	free(combinacoes);

	return 0;

}

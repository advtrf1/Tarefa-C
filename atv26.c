#include <stdio.h>
#include <stdlib.h>

double exponenciacaoRapida(double x, int n) {
	if(n == 0){
		return 1;

	}

	if(n < 0)
		return 1 / exponenciacaoRapida(x, -n);

	double temp = exponenciacaoRapida(x, n / 2);

	if(n % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;

}

int main() {
	double x = 2.0;
	int n = -3;

	double resultado = exponenciacaoRapida(x, n);
	printf("%.2f elevado a %d eh %.5f\n", x, n, resultado);

	return 0;

}

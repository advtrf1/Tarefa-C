#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
	if (b == 0) {
		return a;

	}

	return mdc(b, a % b);

}

int main() {
	int num1 = 56, num2 = 98;

	printf("%d\n", mdc(num1, num2));

	return 0;

}

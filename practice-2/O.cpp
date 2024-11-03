#include <stdio.h>

/* Alg source: https://math.stackexchange.com/questions/130352/last-non-zero-digit-of-a-factorial */
int d[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastn0digit (int n) {
	if (n < 10) 
		return d[n];
	if (((n / 10) % 10) % 2 == 0) 
		return (6 * lastn0digit(n / 5) * d[n % 10]) % 10;
	else 
		return (4 * lastn0digit(n / 5) * d[n % 10]) % 10;
}

int main(void) {
	int n;
	scanf("%d", &n);

	printf("%d", lastn0digit(n));

	return 0;
}

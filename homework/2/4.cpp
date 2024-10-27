#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	/* Check odd or even */
	printf(n % 2 == 0 ? "so chan" : "so le");
	printf("\n");

	/* Check pos or neg */
	printf(n > 0 ? "so duong" : "so am");
	printf("\n");

	return 0; 
}

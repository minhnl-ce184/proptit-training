#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	printf((n % 2 == 0) ? "CHAN" : "LE");
	printf("\n");
	return 0; 
}

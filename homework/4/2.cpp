#include <math.h>
#include <stdio.h>

long long countd (long long n) {
	long long count = 1;
	while ((n /= 10) != 0) {
		count++;
	}
	return count;
}

void print_digits (long long n) {
	long long d = countd(n);
	while (d > 0) {
		printf("%lld ", (n / (long long) pow(10, d-- - 1)) % 10);
	}
}

int main(void) {
	long long n;
	scanf("%lld", &n);

	print_digits(n);

	printf("\n"); 
	return 0;
}

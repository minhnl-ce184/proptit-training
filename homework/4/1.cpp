#include <stdio.h>

int isprime (long long n) {
	for (int d = 2; d * d <= n; d++) {
		if (n % d == 0) return 0;
	}
	return n > 1;
}

int main(void) {
	long long n;
	scanf("%lld", &n); 

	printf( isprime(n) ? "YES" : "NO");
	printf("\n");
	return 0; 
}

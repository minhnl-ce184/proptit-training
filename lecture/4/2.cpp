#include <math.h>
#include <stdio.h>

int isprime (long long n) {
	for (int d = 2; d <= sqrt(n); d++) {
		if (n % d == 0) {
			return 0;
		}
	}
	return (n > 1);
}

int main(void) {
	long long n;
	scanf("%lld", &n);

	printf(isprime(n) ? "YES\n" : "NO\n"); 
	return 0; 
}

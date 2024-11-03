#include <math.h>
#include <stdio.h>

#define MOD 1000000007

long long modpow(long long x, long long n, long long m) {
	if (n == 0) return 1 % m;
	long long u = modpow(x, n/2, m);
	u = (u * u) % m;
	if (n % 2 == 1) u = (u * x) % m;
	return u;
}

int main(void) {
	long long a, n, sum = 1;
	scanf("%lld%lld", &a, &n);

	for (long long i = 1; i <= n; i++) {
		sum += modpow(a, i, MOD);
	}
	printf("%lld", sum);

	return 0; 
}

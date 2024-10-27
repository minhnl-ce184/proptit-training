#include <math.h>
#include <stdio.h>

long long digit (long long n) {
	long long digit = 1;
	while ((n /= 10) != 0) digit++;
	return digit;
}
 
long long geosum (long long n, long long r) {
	long long pow10, sum;
	if (r == 0) return 0; 
	pow10 = 1;
	for (int i = 0; i < n; i++) {
		pow10 *= 10; 
	}
	sum = (pow10 * r - 1) / (pow10 - 1);
	return sum;
}

long long gcd (long long a, long long b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main(void) {
	long long a, x, y, test, d;
	scanf("%lld", &test);

	while (test--) {
		scanf("%lld%lld%lld", &a, &x, &y);

		d = digit(a);

		printf("%lld\n", gcd(geosum(d, x), geosum(d, y)));
	}
	return 0;
}


#include <stdio.h>

int pow_mod (int x, int n, int m) {
	if (n == 0) return 1 % m;
	long long u = pow_mod(x, n/2, m);
	u = (u * u) % m;
	if (n%2 == 1) u = (u * x) % m;
	return u;
}

/* Euclidean */
int gcd_ext(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcd_ext(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

int inv_mod(int a, int m) {
    int x, y;
    int g = gcd_ext(a, m, &x, &y);
    if (g != 1) {
        return -1;
    }
    return (x % m + m) % m;
}

int main(void) {
	int test, a, x, b, k;

	scanf("%d", &test); 
	while (test--) {
		scanf("%d%d%d%d", &a, &x, &b, &k); 

		printf("%d", (pow_mod(a, x, k) * inv_mod(b, k)) % k);
	}
	return 0;
}

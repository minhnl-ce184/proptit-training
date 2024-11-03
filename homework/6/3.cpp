#include <stdio.h>

int isprime(int n) {
	for (int d = 2; d * d <= n; d++) {
		if (n % d == 0) return 0;
	}
	return n > 1;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (isprime(a[i])) printf("%d ", a[i]);
	}
	return 0;
}

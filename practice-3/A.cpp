#include <stdio.h>

int gcd(int a, int b) {
	if (b != 0) {
		b = a % b;
		a = 
		return gcd(a, a%b);
	}
	return a;
}

void co_prime_pair(int a, int b) {
}

int main(void) {
	int n, a[1000] = {0};

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d\n", gcd(a[0], a[1]));

	return 0;
}

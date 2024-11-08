#include <stdio.h>

int isprime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return n > 1;
}

int main(void) {
	int n, sum = 0; 
	scanf("%d", &n);
	int a[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (isprime(a[i][j])) sum += a[i][j];
		}
	}
	printf("%d\n", sum);
	return 0;
}

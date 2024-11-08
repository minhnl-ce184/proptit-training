#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(void) {
	int n, count = 0;
	scanf("%d", &n);
	int a[n] = {0};

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); 
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (gcd(a[i], a[j]) == 1) count++;
		}
	}
	printf("%d\n", count);
	return 0; 
}

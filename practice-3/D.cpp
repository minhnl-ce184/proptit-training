#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int gcddiffarray(int a[], int n) {
	int result = a[0];
	for (int i = 0; i < n; i++) {
		result = gcd(result, a[i]);
	}
	return result;
}

void printnumberofdivisors(int n) {
	int count = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (n / i == i) {
				count++;
			}
			else {
				count += 2;
			}
		}
	}
	printf("%d\n", count);
}

int main(void) {
	int test, n;
	scanf("%d", &test);

	while (test--) {
		scanf("%d", &n);
		int a[n];

		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		int diff[n - 1];
		for (int i = 0; i < n - 1; i++) {
			diff[i] = abs(a[i] - a[i + 1]);
		}

		printnumberofdivisors(gcddiffarray(diff, n - 1));
	}
	return 0;
}

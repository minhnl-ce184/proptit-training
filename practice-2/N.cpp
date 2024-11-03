#include <math.h>
#include <stdio.h>

long long trinum(long long n) {
	return (n * (n + 1) / 2);
}

int main(void) {
	long long n;
	scanf("%lld", &n);

	for (int i = 1; trinum(i) < n; i++) {
		for (int j = i; trinum(j) < n; j++) {
			if (n == trinum(i) + trinum(j)) {
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
	return 0;
}

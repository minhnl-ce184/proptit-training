#include <stdio.h>

int main(void) {
	long long n, count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%lld", &n);
		if (n == 2) count++;
	}
	printf("%lld\n", count);
}

#include <stdio.h>

int main(void) {
	long long n, count = 1;
	scanf("%lld", &n);

	while ((n /= 10) != 0) {
		count++;
	}
	printf("%lld\n", count);

	return 0; 
}

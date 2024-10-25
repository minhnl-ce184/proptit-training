#include <stdio.h>

int main(void) {
	int test;
	long long n, sum;
	
	scanf("%d", &test);

	while (test-- != 0) {
		scanf("%lld", &n);

		/* Process only if n is > 1-digit */
		while (n > 9) {
			sum = 0;
			/* Find sum of all digits */
			while (n != 0) {
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		
		printf("%lld\n", n);
	}

	return 0; 
}

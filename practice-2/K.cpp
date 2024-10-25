#include <math.h>
#include <stdio.h>

int main(void) {
	long long test, a, x, b, k, ans, result, base, expo;

	scanf("%lld", &test); 

	while (test-- > 0) {
		scanf("%lld%lld%lld%lld", &a, &x, &b, &k); 

		result = 1;
		base = a % k;
		expo = x;

		/* Modular exponentiation */
		while (expo > 0) {
			if (expo % 2 != 0) {
				result = (result * base) % k;
			}
			base = (base * base) % k;
			expo = floor(expo / 2);
		}


	}

	return 0; 
}

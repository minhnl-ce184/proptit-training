#include <stdio.h>

int main(void) {
	int n, x, count = 0, prime, count_prime;
	scanf("%d", &n); 

	while (n > 0) {
		n--;
		scanf("%d", &x);

		/* check if x prime number */
		if (x > 1) {
			prime = 1;
			for (int i = 2; i * i <= x; i++) {
				if (x % i == 0) {
					prime = 0;
					break;
				}
			}
			if (prime) {
				count++;
			}
		}
	}

	/* Check if count also prime number */
	if (count < 2) {
		printf("NO\n"); 
		return 0; 
	}

	count_prime = 1;
	for (int j = 2; j * j <= count; j++) {
		if (count % j == 0) {
			count_prime = 0;
			break;
		}
	}

	if (count_prime) {
		printf("YES\n"); 
	}
	else {
		printf("NO\n"); 
	}

	return 0; 
}

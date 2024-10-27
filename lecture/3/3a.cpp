#include <math.h>
#include <stdio.h>

int main(void) {
	long long n, count = 1, temp, digit;
	scanf("%lld", &n);

	temp = n; 
	/* find the number of digits */
	while ((temp /= 10) != 0) {
		count++;
	}

	/* print out each digit of n */
	for (int i = count - 1; i >= 0; i--) {
		digit = n / (long long) pow(10, i);
		printf("%lld\n", digit);
		n = n - digit * pow(10, i); 
	}

	return 0; 
}

#include <stdio.h>

int main(void) {
	long long n, tempn, digit = 1;
	scanf("%lld", &n);
	tempn = n;

	/* Find the number's digit */
	while (tempn / 10 != 0) {
		digit++;
		tempn /= 10;
	}

	if ((n % 2 == 0) && (digit % 2 == 0)) {
		printf("0\n");
	}
	else if ((n % 2 == 1) && (digit % 2 == 1)) {
		printf("1\n");
	}
	else {
		printf("-1\n"); 
	}

	return 0; 
}

#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	if (n % 2 == 0) {
		printf("CHAN\n");
	}
	else {
		printf("LE\n");
	}
	return 0; 
}

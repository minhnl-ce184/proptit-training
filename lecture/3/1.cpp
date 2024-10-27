#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n); 

	for (long long i = 1; i < n; i += 2) {
		printf("%lld", i); 
	}
	return 0;
}

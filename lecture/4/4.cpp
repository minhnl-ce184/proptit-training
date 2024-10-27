#include <stdio.h>

long factorial (int n) {
	long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans; 
}

int main(void) {
	int test, n; 
	scanf("%d", &test);

	while (test--) {
		scanf("%d", &n); 
		printf("%ld\n", factorial(n));
	}

	return 0; 
}

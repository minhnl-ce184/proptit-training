#include <math.h>
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	if (sqrt(n) * sqrt(n) == (double) n) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	printf("\n");
	return 0; 
}

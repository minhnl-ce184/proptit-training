#include <math.h>
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	if (n >= 0) {
		if (sqrt(n) * sqrt(n) == n) {
			printf("YES");
		}
		else {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}
	printf("\n");
	return 0; 
}

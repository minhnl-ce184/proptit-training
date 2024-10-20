#include <stdio.h>

int main(void) {
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c); 

	if (a < b + c && b < a + c && c < a + b) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	printf("\n");
	return 0;
}

#include <stdio.h>

void intong (long long a, long long b) {
	printf("%lld\n", a + b);
}

int main(void) {
	long long x, y;
	scanf("%lld%lld", &x, &y);

	intong(x, y); 

	return 0;
}

#include <stdio.h>

int main(void) {
	long long a, b, c, min;
	scanf("%lld%lld%lld", &a, &b, &c);

	min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	printf("%lld\n", min);
	return 0; 
}

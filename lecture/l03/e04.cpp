#include <stdio.h>

int main(void) {
	double n;

	scanf("%lf", &n);

	while (n != (long long) n) {
		scanf("%lf", &n);
	}
	printf("%.0lf\n", n); 
	return 0; 
}

#include <stdio.h>

int main(void) {
	int n;
	double sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += 1.0/i;
	}

	printf("%.4lf", sum);
	return 0; 
}


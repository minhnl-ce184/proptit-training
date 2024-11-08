#include <stdio.h>
#include <math.h>

int issquare(int n) {
	if (sqrt(n) * sqrt(n) == (double) n) return 1;
	return 0;
}

int main(void) {
	int n, sum = 0;
	scanf("%d", &n);
	n *= n;
	int a[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (issquare(i)) sum += a[i];
	}
	printf("%d\n", sum);
	return 0; 
}

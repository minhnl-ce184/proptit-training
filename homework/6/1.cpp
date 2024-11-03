#include <stdio.h>

int main(void) {
	int n, min, count = 0;
	scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (i == 0) {
			min = a[i];
		}
		else if (a[i] < min) {
			min = a[i];
			count = 0;
		}
		if (a[i] == min) {
			count++;
		}
	}
	printf("%d %d\n", min, count);
	return 0;
}

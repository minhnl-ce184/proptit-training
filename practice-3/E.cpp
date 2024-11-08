#include <stdio.h>

int main(void) {
	int test, n, q, l, r, sum;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d%d", &n, &q);
		int a[n+1] = {0};

		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		while (q--) {
			scanf("%d%d", &l, &r);
			sum = 0;
			for (int i = l; i <= r; i++) {
				sum += a[i];
			}
			printf("%d\n", sum);
		}
	}
	return 0; 
}

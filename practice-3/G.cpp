#include <stdio.h>

int main(void) {
	int test, n, k;
	scanf("%d", &test);

	while(test--) {
		scanf("%d%d", &k, &n);

		int a[n], answer = 0, sum;

		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}

		for(int i = 0; i < n; i++) {
			sum = 0;
			for(int j = 0; j < n - i; j++) {
				sum += a[i + j];
				if (sum % k == 0) answer++;
			}
		}

		printf("%d\n", answer);
	}
	return 0; 
}

#include <stdio.h>

int main(void) {
	int m, n, p; /* 2 matrices m*n n*p */
	scanf("%d%d%d", &m, &n, &p);
	int a[m][n], b[n][p], answer[m][p] = {0};
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < n; k++) {
				answer[i][j] += (a[i][k] * b[k][j]);
			}
			printf("%d ", answer[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++) {
			scanf("%d", &a[row][col]);
		}
	}

	for (int row = 0; row < m; row++) {
		if (row % 2 == 0) {
			for (int col = 0; col < n; col++) {
				printf("%d ", a[row][col]);
			}
		}
		else {
			for (int col = n - 1; col >= 0; col--) {
				printf("%d ", a[row][col]);
			}
		}
	}
	return 0;
}

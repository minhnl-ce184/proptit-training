#include <stdio.h>

void scan_array(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}
void print_array(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][100];
	scan_array(a, m, n);
	print_array(a, m, n);

	return 0;
}

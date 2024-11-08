#include <stdio.h>

int main(void) {
	int a1, a2, b1, b2, c1, c2;
	
	/* a */
	scanf("%d%d", &a1, &a2);
	int a[a1][a2];

	for (int i = 0; i < a1; i++) {
		for (int j = 0; j < a2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	/* b */
	scanf("%d%d", &b1, &b2);
	int b[b1][b2];

	for (int i = 0; i < b1; i++) {
		for (int j = 0; j < b2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	/* c */
	scanf("%d%d", &c1, &c2);
	int c[c1][c2];

	for (int i = 0; i < c1; i++) {
		for (int j = 0; j < c2; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	
	/* printf */
	for (int i = 0; i < a1; i++) {
		for (int j = 0; j < a2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < b1; i++) {
		for (int j = 0; j < b2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < c1; i++) {
		for (int j = 0; j < c2; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

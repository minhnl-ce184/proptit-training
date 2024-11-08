#include <stdio.h>

int main(void) {
	int m, n, size;
	scanf("%d%d", &m, &n);
	size = m * n;
	int a[size];
	
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
		if ((i == n - 1) || (i = size - 1))
			printf("\n");
	}
	return 0; 
}

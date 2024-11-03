#include <stdlib.h>
#include <stdio.h>

int cmp(const void *ptr1, const void *ptr2){
	int *x = (int*)ptr1;
	int *y = (int*)ptr2;
	return *y - *x;
}

int main(void) {
	int n; 
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), cmp);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void) {
	int n, m, l, r, v;
	scanf("%d%d", &n, &m);
	int a[n] = {0};

	/* Read array */
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	/* Read m action */
	while (m--) {
		scanf("%d%d%d", &l, &r, &v);

		for (int i = l; i <= r; i++) {
			a[i - 1] += v;
		}
	}
	
	/* Print array */
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}



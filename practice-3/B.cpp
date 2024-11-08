#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int a[n], num[n + 2] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	num[a[0]] = num[0] = num[n+2] = 1;
	for (int i = 1; i < n; i++) {
		if (num[a[i] + 1] != 0 || num[a[i] - 1] != 0) {
			num[a[i]] = 1;
		}
		else {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf("%c", 'A' + 2*(j + i));
		}
		printf("\n");
	}
	return 0; 
}

#include <math.h>
#include <stdio.h>

int main(void) {
	int test, n, size;

	scanf("%d", &test); 

	while (test--) {
		scanf("%d", &n);

		size = 2 * n - 1;
		for (int y = n - 1; y >= -(n - 1); y--) {
			for (int x = -(n - 1); x <= (n - 1); x++) {
				printf("%c", (abs(x) < abs(y)) ? 'a' + abs(x) : 'a' + abs(y));
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0; 
}

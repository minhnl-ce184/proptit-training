#include <math.h>
#include <stdio.h>

int main(void) {
	int test, n, x, y, limx, limy;

	scanf("%d", &test);

	while (test > 0) {
		scanf("%d", &n); 

		limx = n - 1;
		limy = -(n - 1); 

		for (x = -(n - 1); x <= limx; x++) {
			for (y = (n - 1); y >= limy; y--) {
				printf("%c", 'a' + abs(y));
			}
			printf("\n"); 
		}

		printf("\n");
		test--;
	}
	return 0; 
}

#include <math.h>
#include <stdio.h>

int main(void) {
	int n; 
	scanf("%d", &n);

	for (int i = 0; i < 2*n - 1; i++) {

		/* Print spaces */
		for (int spaces = abs(i - n + 1); spaces > 0; spaces--) {
			printf(" ");
		}
		
		/* Print stars */
		for (int stars = -(abs(2 * i - 2 * (n - 1))) + 2 * n - 1; stars > 0; stars--) {
			printf("*");
		}

		printf("\n"); 
	}
	return 0; 
}

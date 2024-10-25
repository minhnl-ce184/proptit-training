#include <stdio.h>

int main(void) {
	int n, last_row;
	scanf("%d", &n);

	last_row = n * 2 - 1;

	for (int i = 1; i <= last_row; i++) {

		/* Print full row stars if middle */
		if (i == n) {
			for (int j = 0; j < last_row; j++) {
				printf("*");
			}
			printf("\n");
			continue; 
		}

		/* print out the first star */
		if (i < n) {
			printf("*");
		}
		else {
			for (int k = i - 1; k > 0; k--) {
				printf(" ");
			}
			printf("*");
		}

		/* print out the second stars */
		if (i == 2 || i == 2*n - 2) {
			printf("*");
		}
		else if (i > 2 && i < n) {
			for (int j = i - 2; j > 0; j--) {
				printf(" "); 
			}
			printf("*");
		}
		else if (i > n && i < 2*n - 2) {
			for (int k = -i + 2*(n - 1); k > 0; k--) {
				printf(" ");
			}
			printf("*");
		}
	
		printf("\n"); 
	}
	return 0; 
}

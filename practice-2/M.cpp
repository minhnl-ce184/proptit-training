#include <stdio.h>

int main(void) {
	int n; 
	scanf("%d", &n); 

	for (int row = 1; row <= 2*n - 1; row++) {
		/* Print the first half */
		if (row == 1 || row == n) {
			/* P & R */
			for (int i = 0; i < 2; i++) {
				for (int a = 0; a < n - 1; a++) {
					printf("*");
				}
				printf("   ");
			}
			/* O */
			printf(row != 1 ? "*" : " "); 
			for (int i = 0; i < n - 2; i++) {
				printf(row != 1 ? " " : "*"); 
			}
			printf(row != 1 ? "*" : " "); 
		}
		else if (1 < row && row < n) {
			for (int i = 1; i <= 3; i++) {
				printf("*");
				for (int j = 0; j < n - 2; j++) {
					printf(" ");
				}
				printf("*");
				if (i != 3) printf("  ");
			}
		}
		
		/* Print the 2nd half */
		else {
			/* P */
			printf("*");
			for (int i = 0; i < n + 1; i++) {
				printf(" "); 
			}

			/* R */
			printf("*");
			if (row > n + 1) {
				for (int i = 0; i < row - n - 1; i++) {
					printf(" "); 
				}
			}
			printf("*"); 
			if (row < 2*n - 1) {
				for (int i = 0; i < 2*n - row - 1; i++) {
					printf(" "); 
				}
			}
			printf("  "); 

			/* O */
			printf(row != 2*n - 1 ? "*" : " "); 
			for (int i = 0; i < n - 2; i++) {
				printf(row != 2*n - 1 ? " " : "*"); 
			}
			printf(row != 2*n - 1 ? "*" : " "); 
		}
		printf("\n");
	}
	return 0;
}

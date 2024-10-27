#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n); 

	for (int i = 1; i <= n; i++) {
		printf("*");
		for (int j = i; j > 2 && j < n; j--) {
			printf(" "); 
		}
		if (i == n) {
			for (int k = 1; k < n; k++) {
				printf("*"); 
			}
			printf("\n"); 
		}
		else if (i > 1 && i < n) {
			printf("*");
		}
		printf("\n");
	}
	return 0; 
}

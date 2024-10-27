#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	for (int i = 0; i < n; i++){
		if (i == 0 || i == n - 1) {
			for (int j = 0; j < n; j++) {
				printf("*"); 
			}
		}
		else {
			printf("*");
			for (int j = 0; j < n - 2; j++) {
				if (j + 1 == i || j + 2 == n - i) {
					printf("*");
				}
				else {
					printf(" "); 
				}
			}
			printf("*");
		}
		printf("\n"); 
	}
	return 0; 
}

#include <stdio.h>

int main(void) {
	int n, k, day = 0;

	scanf("%d%d", &n, &k);

	while (1) {
		if (n - k < 0) {
			day += n;
			break;
		}
		else {
			n = n - k + 1;
			day += k; 
		}
	}
	printf("%d", day); 
	return 0; 
}

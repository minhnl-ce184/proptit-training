#include <math.h>
#include <stdio.h>

int main(void) {
	long long n, tri_num1, tri_num2, sum = 0, max;
	scanf("%lld", &n); 

	max = (long long)((sqrt(8 * n + 1) - 1) / 2);

	for (long long k1 = 1; k1 <= max; k1++) {
		tri_num1 = (k1 * (k1 + 1)) / 2;
		if (tri_num1 > n) break;

		for (long long k2 = 1; k2 <= max; k2++) {
			tri_num2 = (k2 * (k2 + 1)) / 2;
			sum = tri_num1 + tri_num2;

			if (sum == n) {
				printf("Yes\n");
				return 0; 
			}
			if (sum > n) break; 
		}
	}
	printf("No\n"); 
	return 0; 
}

#include <math.h>
#include <stdio.h>

int main(void) {
	long long n, count = 0;
	scanf("%lld", &n); 
	
	for (long long i = 0; i < n; i++) {
		if ((long long) sqrt(i) * (long long) sqrt(i) == i) {
      			count++;
		}
	}
	printf("%lld", count);

	return 0;
}

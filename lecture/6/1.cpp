#include <stdio.h>

int main(void) {
	int n; 
	scanf("%d", &n); 

	int a[n];
	long long sum = 0, mul = 1;
	double avg = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); 
		sum += a[i];
		mul *= a[i];
	}

	avg = (double) sum / n;
	printf("%lld\n%lld\n%.2lf\n", sum, mul, avg);

	return 0; 
}

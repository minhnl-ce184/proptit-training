#include <math.h>
#include <stdio.h>

int main(void) {
	long long n, k1, k2;

	double sum; 

	scanf("%lld", &n); 

	k1 = k2 = 1;
	for (k1 = 1; ; k1++) {
		for (k2 = 1; ; k2++) {
			sum = ((2*k1 + 1) * (2*k1 + 1) + (2*k2 + 1) * (2*k2 + 1) - 2) / (double) 8;


	return 0; 
}

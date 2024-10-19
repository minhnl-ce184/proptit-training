#include <math.h>
#include <stdio.h>

int main(void) {
	int l, r, evennum;
	long longevensum;
	scanf("%d %d", &l, &r);

	evennum = (r - l - 2) / 2 + 1;
	evensum = ((long long) r + l) * evennum / 2;

	printf("%lld\n", evensum);

	return 0; 
}

#include <math.h>
#include <stdio.h>

int main(void) {
	long long x, y, z, n, lcmxy, gcdxy, lcmxyz, gcdxyz, temp;
	int test;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%lld%lld%lld%lld", &x, &y, &z, &n);

		/* Find LCM of x and y */
		lcmxy = x*y;
	
		/* Find GCD of x and y */
		while (y != 0) {
			temp = y;
			y = x % y;
			x = temp;
		}
		gcdxy = x;
	
		lcmxy /= gcdxy;
	
		/* Find LCM of x and y and z */
		lcmxyz = lcmxy * z;
	
		/* Find GCD of x and y and z */
		while (z != 0) {
			temp = z;
			z = lcmxy % z;
			lcmxy = temp;
		}
		gcdxyz = lcmxy;
	
		lcmxyz /= gcdxyz;

		/* Find the smallest n-digit */
		lcmxyz = lcmxyz * ceil( pow(10, n-1) / lcmxyz); 

		if (lcmxyz < pow(10, n)) {
			printf("%lld\n", lcmxyz);
		}
		else {
			printf("-1\n"); 
		}
	
	}
	return 0; 
}

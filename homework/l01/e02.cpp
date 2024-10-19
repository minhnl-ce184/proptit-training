#include <math.h>
#include <stdio.h>

int main(void) {
	float a, b, c, p, S; 
	
	scanf("%f %f %f", &a, &b, &c); 

	if (a + b < c || a + c < b || b + c < a) {
		/* conflict with triangle inequality */
		return 0;
	}
	
	p = (a + b + c) / 2; 
	
	/* Using Heron's Formula */
	S = sqrt(p*(p-a)*(p-b)*(p-c)); 

	printf("%f\n", S); 
	return 0; 
}

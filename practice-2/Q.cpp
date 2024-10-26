#include <stdio.h>

int main(void) {
	int contain_float = 0;
	double n, sum = 0;
	char ch;

	while (ch != '\n') {
		scanf("%lf", &n);
		sum += n;
		ch = getchar();
		if (n - (long long) n != 0 && contain_float == 0) {
			contain_float = 1;
		}
	}
	printf(contain_float ? "%lf" : "%.0lf", sum);
	printf("\n");
	return 0; 
}

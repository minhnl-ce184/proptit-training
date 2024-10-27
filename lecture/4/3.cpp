#include <stdio.h>

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void) {
	int x = 2, y = 3;

	swap(x, y);
	printf("%d %d\n", x, y);
	return 0; 
}

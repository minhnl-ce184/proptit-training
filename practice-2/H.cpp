#include <math.h>
#include <stdio.h>

int main(void) {
	int test, x, y, count_x, count_y, temp, last_digit;
	long long rev_x;
	scanf("%d", &test);

	while (test > 0) {
		test--;
		scanf("%d%d", &x, &y);

		/* Even - odd */
		if ((x % 2 == 0) != (y % 2 == 0)) {
			printf("No\n");
			continue;
		}

		/* Fint the digits of x and y */
		for (count_x = 0, temp = x; temp > 0; temp /= 10) {
			count_x++;
		}
		for (count_y = 0, temp = y; temp > 0; temp /= 10) {
			count_y++;
		}
		
		/* Immediately return if count_x != count_y */
		if (count_x != count_y) {
			printf("No\n");
			continue;
		}

		rev_x = x;
		for (int i = 0; i < count_x; i++) {
			last_digit = rev_x % 10;
			rev_x += last_digit * ((long long) pow(10, count_x * 2 - 1 - 2 * i));
			rev_x /= 10;
		}

		if (rev_x != y) {
			printf("No\n"); 
		}
		else {
			printf("Yes.\n"); 
		}

	}
	return 0;
}

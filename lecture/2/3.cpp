#include <stdio.h>

int main(void) {
	int month, day;
	scanf("%d", &month);

	if (month > 12 || month < 1) {
		printf("INVALID\n");
		return 0;
	}

	switch (month) {
		case 2:
			day = 28;
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		default:
			day = 31;
	}

	printf("%d\n", day);
	return 0;
}

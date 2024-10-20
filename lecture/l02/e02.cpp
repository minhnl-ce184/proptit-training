#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c", &ch);

	if (ch == 'A') printf("BO");
	else if (ch == 'B') printf("ME");
	else printf("KHONG BIET");
	printf("\n");
	return 0;
}

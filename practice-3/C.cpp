#include <stdio.h>

int main(void) {
	int money;
	int charge[3] = {0};

	int n;
	scanf("%d", &n);

	while (n--) {
		scanf("%d", &money);
		switch (money) {
			case  25: 
				charge[0]++; break;
			case  50: 
				charge[0]--;
				if (charge[0] < 0) {
					printf("NO\n");
					return 0;
				}
				charge[1]++; break;
			case 100: 
				if (charge[0] >= 1 && charge[1] >= 1) {
					charge[0]--;
					charge[1]--;
				}
				else if (charge[0] >= 3) {
					charge[0] -= 3;
				}
				else {
					printf("NO\n");
					return 0;
				}
				charge[2]++; break;
		}
	}
	printf("YES\n");
	return 0;
}

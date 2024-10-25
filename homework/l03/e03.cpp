#include <stdio.h>

int main(void) {
    int n, size;
    scanf("%d", &n); 

    size = 2 * n + 1; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = n - (i < j ? (i < size - 1 - j ? i : size - 1 - j) : (j < size - 1 - i ? j : size - 1 - i));
            printf("%d", value);
        }
        printf("\n");
    }

    return 0; 
}

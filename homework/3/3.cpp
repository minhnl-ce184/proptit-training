#include <stdio.h>

int main(void) {
    int n, size, x, y;
    scanf("%d", &n); 

    size = 2*n + 1;
    x = -size;
    y = size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%lld", (long long) sqrt(i * i + j * j);
        }
        printf("\n"); 
    }

    return 0; 
}

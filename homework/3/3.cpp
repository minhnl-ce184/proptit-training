#include <math.h>
#include <stdio.h>

int main(void) {
    int n, size;
    scanf("%d", &n); 

    for (int y = n; y >= -n; y--) {
        for (int x = -n; x <= n; x++) {
            printf("%lld", (long long) sqrt(x * x + y * y));
        }
        printf("\n"); 
    }

    return 0; 
}

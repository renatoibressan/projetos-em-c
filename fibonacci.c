#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int auxiliar, i, n;
    scanf("%d", &n);
    printf("%d", b);
    for(i = 0; i < n; i++) {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf(", %d", auxiliar);
    }
    printf("\n");
    return 0;
}
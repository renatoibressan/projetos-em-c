#include <stdio.h>

int fatorial(int i) {
    if (i <= 1) return 1;
    return i * fatorial(i - 1);
}

int main() {
    int a;
    scanf("%d", &a);
    int b = fatorial(a);
    printf("%d\n", b);
    return 0;
}
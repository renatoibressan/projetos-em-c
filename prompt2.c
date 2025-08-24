#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float a, b;
    float r;

    // printf("Entre com o valor de x: ");
    scanf("%f", &x);

    // printf("Entre com o valor de y: ");
    scanf("%f", &y);

    // printf("Entre com o valor de a: ");
    scanf("%f", &a);

    // printf("Entre com o valor de b: ");
    scanf("%f", &b);

    // calcula o valor do raio;
    r = sqrt(pow(x - a, 2) + pow(y - b, 2));
    printf("O valor do raio equivale a: %.2f\n", r);

    return 0;
}
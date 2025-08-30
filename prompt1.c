#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta;
    float x1, x2;
    float y1, y2;

    // printf("Entre com o valor de a: ");
    scanf("%f", &a);

    // printf("Entre com o valor de b: ");
    scanf("%f", &b);

    // printf("Entre com o valor de c: ");
    scanf("%f", &c);

    // calcula o valor de delta;
    delta = pow(b, 2) - 4 * a * c;
    // calcula o valor de x1;
    x1 = (-b + sqrt(delta))/2 * a;
    // calcula o valor de x2;
    x2 = (-b - sqrt(delta))/2 * a;
    printf("Os valores possiveis pra x sao: %.2f e %.2f\n", x1, x2);

    // calcula o valor de y1;
    y1 = a * pow(x1, 2) + b * x1 + c;
    // calcula o valor de y2;
    y2 = a * pow(x2, 2) + b * x2 + c;
    printf("Os valores possiveis pra y sao: %.2f e %.2f\n", y1, y2);

    return 0;

}

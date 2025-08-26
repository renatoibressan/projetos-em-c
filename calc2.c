#include <stdio.h>

int main() {
    printf("Renato Bressan Calculator | Version 2.0\n");
    float num1, num2;
    char operador;
    printf("Enter the numbers and the arithmetic operator: \n");
    scanf("%f %c %f", &num1, &operador, &num2);
    float resultado;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Result: %.2f\n", resultado);
            printf("Thanks for using the calculator!\n");
            break;
        case '-':
            resultado = num1 - num2;
            printf("Result: %.2f\n", resultado);
            printf("Thanks for using the calculator!\n");
            break;
        case '*':
            resultado = num1 * num2;
            printf("Result: %.2f\n", resultado);
            printf("Thanks for using the calculator!\n");
            break;
        case '/':
            resultado = num1 / num2;
            if (num2 == 0) {
                printf("No numbers can be divided by 0\n");
            } else {
                printf("Result: %.2f\n", resultado);
                printf("Thanks for using the calculator!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
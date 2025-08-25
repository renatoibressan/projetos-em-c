#include <stdio.h>

int main() {
    printf("Renato Bressan Calculator | Version 1.0\n");
    char operador;
    printf("Enter the arithmetic operator: \n");
    scanf("%c", &operador);
    float num1;
    printf("Enter the first number: \n");
    scanf("%f", &num1);
    float num2;
    printf("Enter the second number: \n");
    scanf("%f", &num2);
    float resultado;
    if (operador == '+') {
        resultado = num1 + num2;
        printf("Result: %.2f\n", resultado);
        printf("Thanks for using the calculator!\n");
    }
    else if (operador == '-') {
        resultado = num1 - num2;
        printf("Result: %.2f\n", resultado);
        printf("Thanks for using the calculator!\n");
    }
    else if (operador == '*') {
        resultado = num1 * num2;
        printf("Result: %.2f\n", resultado);
        printf("Thanks for using the calculator!\n");
    }
    else if (operador == '/') {
        resultado = num1 / num2;
        if (num2 == 0) {
            printf("Error\n");
        } else {
            printf("Result: %.2f\n", resultado);
            printf("Thanks for using the calculator!\n");
        }
    } else {
        printf("Error\n");
    } 
    return 0;
}
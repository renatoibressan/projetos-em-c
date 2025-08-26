#include <stdio.h>

int main() {
    int option = 0;
    while (option != 1 && option == 0) {
        printf("Renato Bressan Calculator | Version 3.0\n");
        float num1, num2;
        char operador;
        printf("Enter the numbers and the arithmetic operator: \n");
        scanf("%f %c %f", &num1, &operador, &num2);
        float resultado;
        switch (operador) {
            case '+':
                resultado = num1 + num2;
                printf("Result: %.2f\n", resultado);
                printf("Enter '0' to continue or '1' to exit: \n");
                scanf("%d", &option);
                if (option == 1) {
                    printf("Thanks for using the calculator!\n");
                    return 0;
                }
                break;
            case '-':
                resultado = num1 - num2;
                printf("Result: %.2f\n", resultado);
                printf("Enter '0' to continue or '1' to exit: \n");
                scanf("%d", &option);
                if (option == 1) {
                    printf("Thanks for using the calculator!\n");
                    return 0;
                }
                break;
            case '*':
                resultado = num1 * num2;
                printf("Result: %.2f\n", resultado);
                printf("Enter '0' to continue or '1' to exit: \n");
                scanf("%d", &option);
                if (option == 1) {
                    printf("Thanks for using the calculator!\n");
                    return 0;
                }
                break;
            case '/':
                resultado = num1 / num2;
                if (num2 == 0) {
                    printf("No numbers can be divided by 0\n");
                    printf("Enter '0' to continue or '1' to exit: \n");
                    scanf("%d", &option);
                    if (option == 1) {
                        printf("Thanks for using the calculator!\n");
                        return 0;
                    }
                } else {
                    printf("Result: %.2f\n", resultado);
                    printf("Enter '0' to continue or '1' to exit: \n");
                    scanf("%d", &option);
                    if (option == 1) {
                        printf("Thanks for using the calculator!\n");
                        return 0;
                    }
                }
                break;
            default:
                printf("Invalid operator\n");
                printf("Enter '0' to continue or '1' to exit: \n");
                scanf("%d", &option);
                if (option == 1) {
                    printf("Thanks for using the calculator!\n");
                    return 0;
                }
                break;
        }
    }
    return 0;

}
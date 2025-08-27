#include <stdio.h>

int main() {
    int option = 0;
    do {
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
                printf("Enter '0' to continue or any other number to exit: \n");
                scanf("%d", &option);
                if (option != 0) {
                    printf("Thanks for using the calculator!\n");
                    break;
                }
                else if (option == 0) {
                    printf("Proceeding to the calculator...\n");
                    break;
                }
                break;
            case '-':
                resultado = num1 - num2;
                printf("Result: %.2f\n", resultado);
                printf("Enter '0' to continue or any other number to exit: \n");
                scanf("%d", &option);
                if (option != 0) {
                    printf("Thanks for using the calculator!\n");
                    break;
                }
                else if (option == 0) {
                    printf("Proceeding to the calculator...\n");
                    break;
                }
                break;
            case '*':
                resultado = num1 * num2;
                printf("Result: %.2f\n", resultado);
                printf("Enter '0' to continue or any other number to exit: \n");
                scanf("%d", &option);
                if (option != 0) {
                    printf("Thanks for using the calculator!\n");
                    break;
                }
                else if (option == 0) {
                    printf("Proceeding to the calculator...\n");
                    break;
                }
                break;
            case '/':
                resultado = num1 / num2;
                if (num2 == 0) {
                    printf("No numbers can be divided by 0\n");
                    printf("Enter '0' to continue or any other number to exit: \n");
                    scanf("%d", &option);
                    if (option != 0) {
                        printf("Thanks for using the calculator!\n");
                        break;
                    }
                    else if (option == 0) {
                        printf("Proceeding to the calculator...\n");
                        break;
                    }
                } else {
                    printf("Result: %.2f\n", resultado);
                    printf("Enter '0' to continue or any other number to exit: \n");
                    scanf("%d", &option);
                    if (option != 0) {
                        printf("Thanks for using the calculator!\n");
                        break;
                    }
                    else if (option == 0) {
                        printf("Proceeding to the calculator...\n");
                        break;
                    }
                }
                break;
            default:
                printf("Invalid operator\n");
                printf("Enter '0' to continue or any other number to exit: \n");
                scanf("%d", &option);
                if (option != 0) {
                    printf("Thanks for using the calculator!\n");
                    break;
                }
                else if (option == 0) {
                    printf("Proceeding to the calculator...\n");
                    break;
                }
        }
    } while (option == 0);
    return 0;
}

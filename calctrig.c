#include <stdio.h>
#include <math.h>
#define PI 3.141

int main() {
    float x;
    int opt;
    printf("Enter 'x' in degrees: ");
    scanf(" %f", &x);
    if (x < 0 || x > 360) {
        printf("The calculator only accepts x values from 0 to 360.\n");
        return 0;
    }
    do {
        printf("Enter '0' for sine, '1' for cosine, or '2' for tangent: ");
        scanf("%d", &opt);
        switch(opt) {
            case 0:
                printf("The sine is: %.3f\n", sin(x * PI / 180));
                break;
            case 1:
                printf("The cosine is: %.3f\n", cos(x * PI / 180));
                break;
            case 2:
                if (x != 90 && x != 270) {
                    printf("The tangent is: %.3f\n", tan(x * PI / 180));
                    break;
                } else if (x == 90 || x == 270) {
                    printf("Error. There's a divison by zero:\n");
                    printf("Tangent is equal to sine divided by cosine. ");
                    printf("Cosine of 90 and 270 degrees equals 0. ");
                    printf("Therefore, there is a division by zero, which in turn cannot be performed.\n");
                    break;
            }
            default:  
                printf("Error. ");
        }
    } while (opt != 0 && opt != 1 && opt != 2);
    return 0;
}


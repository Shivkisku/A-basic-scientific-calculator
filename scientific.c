#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^, sqrt, sin, cos, tan): ");
    scanf("%c", &op);

    switch(op) {
        case '+':
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        case '^':
            printf("Enter two numbers to raise to power: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
            break;
        case 's':
            printf("Enter a number to find square root: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("sqrt(%.2lf) = %.2lf", num1, result);
            break;
        case 'c':
            printf("Enter an angle in degrees to find cosine: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180);
            printf("cos(%.2lf) = %.2lf", num1, result);
            break;
        case 't':
            printf("Enter an angle in degrees to find tangent: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180);
            printf("tan(%.2lf) = %.2lf", num1, result);
            break;
        default:
            printf("Error: Invalid operator.");
    }

    return 0;
}

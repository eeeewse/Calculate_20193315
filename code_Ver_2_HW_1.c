#include <stdio.h>
#include <math.h

int main() {
    char operator;
    double num1, num2;

    // num input
    printf("Enter an operator (+, -, *, /, s for sin, c for cos, t for tan): ");
    scanf_s(" %c", &operator);  // blanck space for ignoring white space

    if (operator == 's' || operator == 'c' || operator == 't') {
        printf("Enter an operand: ");
        scanf_s("%lf", &num1);  // sin, cos, tan input
    } else {
        // default & other cases
        printf("Enter two operands: ");
        scanf_s("%lf %lf", &num1, &num2);
    }

    // mechanism
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");  // to infinity
            break;
        case 's':
            printf("sin(%.2lf) = %.2lf\n", num1, sin(num1));  // sin f
            break;
        case 'c':
            printf("cos(%.2lf) = %.2lf\n", num1, cos(num1));  // cos f
            break;
        case 't':
            printf("tan(%.2lf) = %.2lf\n", num1, tan(num1));  // tan f
            break;
        default:
            printf("Error! Operator is not correct\n");  // not correct
            break;
    }

    return 0;
}
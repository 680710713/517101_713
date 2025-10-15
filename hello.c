#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter expression (e.g., 5 + 3): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("%d",5555);
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Unsupported operator.\n");
    }

    return 0;
}
//Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>
int main() {
    char operator;
    double num1, num2;

    printf("\n------Enter two numbers------\n");
    printf("\nFirst number: ");
    scanf("%lf", &num1);
    printf("\nSecond number: ");
    scanf("%lf", &num2);

    printf("\nEnter an operator (+, -, *, /, %) : ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("\nError! Division by zero.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("\n%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("\nError! Division by zero.\n");
            }
            break;
        default:
            printf("\nError! Operator is not correct.\n");
    }

    return 0;
}
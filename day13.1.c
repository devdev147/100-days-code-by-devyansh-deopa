#include <stdio.h>
// Program to perform basic arithmetic operations using switch-case
int main() {
    char op;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;
        case '%':
            if(num2 == 0) {
                printf("Error: Modulo by zero\n");
            } else {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
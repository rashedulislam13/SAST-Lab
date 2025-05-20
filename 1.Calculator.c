#include <stdio.h>

int main() {
    double num1, num2;
    char charecter, press;

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("Enter num2: ");
    scanf("%lf", &num2);

    printf("Enter +,-,*,/,%c: ", '%'); // % needs to be escaped in printf
    scanf(" %c", &charecter); // note the space before %c to consume any leftover newline

    printf("Enter =: ");
    scanf(" %c", &press);

    if (press == '=') {
        if (charecter == '+') {
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        } else if (charecter == '-') {
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        } else if (charecter == '*') {
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        } else if (charecter == '/') {
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
        } else if (charecter == '%') {
            int int1 = (int)num1;
            int int2 = (int)num2;
            if (int2 != 0)
                printf("%d %% %d = %d\n", int1, int2, int1 % int2);
            else
                printf("Modulo by zero is not allowed.\n");
        } else {
            printf("Invalid operator.\n");
        }
    }

    return 0;
}

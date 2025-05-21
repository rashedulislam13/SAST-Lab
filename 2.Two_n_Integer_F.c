#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int j = 2 * n;
    double vec[2 * n];

    printf("Enter numbers:\n");
    for (int i = 0; i < j; i++) {
        scanf("%lf", &vec[i]);
    }

    char ch;
    printf("Enter operator: ");
    scanf(" %c", &ch);  // The space before %c is important!

    if (ch == '+') {
        for (int i = 0; i < j; i += 2) {
            printf("%.2lf + %.2lf = %.2lf\n", vec[i], vec[i + 1], vec[i] + vec[i + 1]);
        }
    } else if (ch == '-') {
        for (int i = 0; i < j; i += 2) {
            printf("%.2lf - %.2lf = %.2lf\n", vec[i], vec[i + 1], vec[i] - vec[i + 1]);
        }
    } else if (ch == '*') {
        for (int i = 0; i < j; i += 2) {
            printf("%.2lf * %.2lf = %.2lf\n", vec[i], vec[i + 1], vec[i] * vec[i + 1]);
        }
    } else if (ch == '/') {
        for (int i = 0; i < j; i += 2) {
            if (vec[i + 1] != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", vec[i], vec[i + 1], vec[i] / vec[i + 1]);
            } else {
                printf("%.2lf / %.2lf = Undefined (Division by zero)\n", vec[i], vec[i + 1]);
            }
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[100], arr2[100];
    char op;
    int n = 0;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d integers for the first set:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d integers for the second set:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter operator (+, -, *, /) followed by ; : ");
    scanf(" %c;", &op);  // The space before %c skips whitespace

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        switch (op) {
            case '+':
                printf("%d ", arr1[i] + arr2[i]);
                break;
            case '-':
                printf("%d ", arr1[i] - arr2[i]);
                break;
            case '*':
                printf("%d ", arr1[i] * arr2[i]);
                break;
            case '/':
                if (arr2[i] != 0)
                    printf("%d ", arr1[i] / arr2[i]);
                else
                    printf("Inf ");  // handle division by zero
                break;
            default:
                printf("\nInvalid operator.\n");
                return 1;
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int num;
    long long factorial_for = 1, factorial_while = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Factorial using for loop
    for (int i = 1; i <= num; i++) {
        factorial_for *= i;
    }

    // Factorial using while loop
    int i = 1;
    while (i <= num) {
        factorial_while *= i;
        i++;
    }

    // Display both results
    printf("Factorial using for loop: %lld\n", factorial_for);
    printf("Factorial using while loop: %lld\n", factorial_while);

    // Verify results
    if (factorial_for == factorial_while) {
        printf("Verification successful: Both methods give the same result.\n");
    } else {
        printf("❌ Verification failed: Results are different.\n");
    }

    return 0;
}

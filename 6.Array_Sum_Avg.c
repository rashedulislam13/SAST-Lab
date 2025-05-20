#include <stdio.h>

// Function to calculate sum using do-while loop
int calculateSum(int arr[], int n) {
    int sum = 0, i = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < n);
    return sum;
}

// Function to calculate average (reuses sum function)
float calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n);
    return (float)sum / n;
}

int main() {
    int n, arr[100];

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call functions
    int sum = calculateSum(arr, n);
    float avg = calculateAverage(arr, n);

    // Output results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

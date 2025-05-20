#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int num, count = 0;
    int sum = 0, first = 1, subtraction = 0;
    int product = 1;
    float division = 0;
    int numbers[100]; // assuming at most 100 integers

    // Reading numbers from input.txt
    while (fscanf(inputFile, "%d", &num) == 1) {
        numbers[count++] = num;
        sum += num;
        product *= num;
    }

    if (count == 0) {
        fprintf(outputFile, "No numbers found in input file.\n");
        fclose(inputFile);
        fclose(outputFile);
        return 0;
    }

    // Initialize subtraction and division with the first number
    subtraction = numbers[0];
    division = (float) numbers[0];

    for (int i = 1; i < count; i++) {
        subtraction -= numbers[i];
        if (numbers[i] != 0)
            division /= numbers[i];
        else {
            fprintf(outputFile, "Division by zero encountered. Cannot continue.\n");
            fclose(inputFile);
            fclose(outputFile);
            return 1;
        }
    }

    // Writing results to output.txt
    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Subtraction (left-to-right): %d\n", subtraction);
    fprintf(outputFile, "Multiplication: %d\n", product);
    fprintf(outputFile, "Division (left-to-right): %.2f\n", division);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

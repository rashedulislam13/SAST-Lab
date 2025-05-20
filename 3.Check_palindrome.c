#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char input[100];

    printf("Enter a number or string: ");
    scanf("%s", input);

    // Convert to lowercase for case-insensitive comparison
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    if (isPalindrome(input))
        printf("'%s' is a palindrome.\n", input);
    else
        printf("'%s' is not a palindrome.\n", input);

    return 0;
}

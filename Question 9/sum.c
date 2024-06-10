#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

   // Validate the input
    if (num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Compute the sum of the digits
    while (num > 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit from the number
    }

      // Print the result
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
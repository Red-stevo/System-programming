#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);



    // Compute the sum of the digits
    while (num > 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit from the number
    }


    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int closestInteger(int num) {
    int closest_lower_root = sqrt(num);
    int closest_higher_root = closest_lower_root + 1;

    if (abs(num - closest_lower_root * closest_lower_root) <= abs(num - closest_higher_root * closest_higher_root)) {
        return closest_lower_root * closest_lower_root;
    } else {
        return closest_higher_root * closest_higher_root;
    }
}

int main() {
    int input;

    while (1) {
        printf("Enter a positive integer: ");
        scanf("%d", &input);

        if (input <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            break;
        }
    }

    int closest_integer = closestInteger(input);
    printf("The closest integer with a whole number square root to %d is %d.\n", input, closest_integer);

    return 0;
}


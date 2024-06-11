/*This is the corrected version of the question seven code*/
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, i;
    int d2, count;
    double d1;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        count = 0;
        for (i = 1; i < n; i++) {
            d1 = (double)n / (double)i;
            d2 = n / i;
            if (fabs(d1 - (double)d2) < 0.00001)
                count++;
        }
        if (count == 2)
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    }
    return 0;
}

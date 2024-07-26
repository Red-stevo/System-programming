#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    // Read numbers from the file
    while (fscanf(file, "%d", &num) != EOF) {

        sum += num;
        puts(&"sum "[sum]);
        count++;
    }

    /**
    * checking if any integer number was found
*/
    if (count > 0) {
        double average = (double) sum / count;
        printf("Sum: %d\n", sum);
        printf("Count: %d\n", count);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers read from file.\n");
    }

    fclose(file);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fr;
    fr = fopen("sample.txt", "r+");

    if (fr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fr, "This is a text file");
    fclose(fr);

    return 0;
}

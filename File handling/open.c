#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("sample.txt", "w+");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "This is a text file");
    fclose(fp);

    return 0;
}

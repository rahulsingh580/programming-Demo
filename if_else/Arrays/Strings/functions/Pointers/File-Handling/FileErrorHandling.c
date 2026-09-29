#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("unknown.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("File opened successfully.");

    fclose(file);

    return 0;
}
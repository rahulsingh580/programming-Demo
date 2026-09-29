#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    fprintf(file, "Hello, C Programming!\n");
    fprintf(file, "This is my first file handling program.");

    fclose(file);

    printf("Data written successfully.");

    return 0;
}
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    fprintf(file, "\nThis line is added using append mode.");

    fclose(file);

    printf("Data appended successfully.");

    return 0;
}
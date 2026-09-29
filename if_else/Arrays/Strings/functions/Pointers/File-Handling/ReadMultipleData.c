#include <stdio.h>

int main() {
    FILE *file;
    int num;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Numbers in file:\n");

    while (fscanf(file, "%d", &num) != EOF) {
        printf("%d ", num);
    }

    fclose(file);

    return 0;
}
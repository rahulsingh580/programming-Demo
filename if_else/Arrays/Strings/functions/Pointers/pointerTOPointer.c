#include <stdio.h>

int main() {
    int num = 10;

    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num = %d\n", num);
    printf("Using pointer = %d\n", *ptr);
    printf("Using pointer to pointer = %d", **ptr2);

    return 0;
}
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Address of num = %p\n", (void *)&num);
    printf("Address stored in ptr = %p", (void *)ptr);

    return 0;
}
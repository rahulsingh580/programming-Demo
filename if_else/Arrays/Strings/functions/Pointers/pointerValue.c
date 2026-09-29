#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num;

    printf("Before = %d\n", num);

    *ptr = 50;

    printf("After = %d", num);

    return 0;
}
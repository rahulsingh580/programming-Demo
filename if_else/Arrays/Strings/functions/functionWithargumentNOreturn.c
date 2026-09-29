#include <stdio.h>

void square(int n) {
    printf("Square = %d", n * n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    square(num);

    return 0;
}
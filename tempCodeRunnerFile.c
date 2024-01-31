#include <stdio.h>

int main() {
    int number;

    // Input the number from the user

    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
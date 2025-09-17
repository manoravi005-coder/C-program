#include <stdio.h>
int main() {
    int a, firstDigit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a);
    firstDigit = a / 100;
    if (firstDigit % 2 == 0) {
        printf("The first digit (%d) is even.\n", firstDigit);
    } else {
        printf("The first digit (%d) is odd.\n", firstDigit);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0, power, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;

        for (i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}

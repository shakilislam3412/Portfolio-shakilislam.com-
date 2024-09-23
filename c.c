#include <stdio.h>

int main() {
    int X, Y;


    printf("Enter the values of X and Y: ");
    scanf("%d %d", &X, &Y);


    if (X > Y) {
        printf("No even numbers are possible.\n");
    } else {
        printf("The even numbers are: ");
        for (int i = X; i <= Y; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N, i, num;
    int largest, smallest;


    printf("Enter the value of N: ");
    scanf("%d", &N);

  
    if (N <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 1;
    }


    printf("Enter the %d values: ", N);

    scanf("%d", &num);
    largest =smallest =  num;
5


  
    for (i = 1; i < N; i++) {
        scanf("%d", &num);


        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }


    printf("The largest value is %d, and the smallest value is %d.\n", largest, smallest);

    return 0;
}


#include <stdio.h>

int main() {
	int num1, num2, hcf;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	int a = num1;
	int b = num2;

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	hcf = a;

	printf("HCF of %d and %d is %d\n", num1, num2, hcf);

	return 0;
}



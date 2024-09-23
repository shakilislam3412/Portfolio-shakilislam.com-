#include <stdio.h>

int main() {
	int num1, num2, num3;
	int max, min;

	// Taking input from the user
	printf("Enter the three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	// Finding the maximum
	max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}

	// Finding the minimum
	min = num1;
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}

	// Printing the results
	printf("The maximum of the three numbers is %d.\n", max);
	printf("The minimum of the three numbers is %d.\n", min);

	return 0;
}


#include <stdio.h>

int main() {
	int n, num;

	printf("Enter the number of cases: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &num);

		if (num % 2 == 0) {
			printf("The number is even.\n");
		} else {
			printf("The number is odd.\n");
		}
	}

	return 0;
}

#include <stdio.h>

int main() {
	int num, count = 0;

	// Prompt user for input
	printf("Enter the number: ");
	scanf("%d", &num);

	// Ensure the number is positive
	if (num <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	// Count the number of digits
	while (num != 0) {
		num /= 10;
		count++;
	}

	// Output the result
	printf("The number of digits in the number is %d.\n", count);

	return 0;
}

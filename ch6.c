#include <stdio.h>

int main()

{
	int num1;

	int num2;

	int sum;

	int difference;

	int product;

	int quotient;

	int modulus;

	printf("First number: ");

	scanf("%d", &num1);

	printf("Second number: ");

	scanf("%d", &num2);


	sum = num1 + num2;

	printf("sum = %d\n", sum);

	difference = num1 - num2;

	printf("difference = %d\n", difference);

	product = num1 * num2;

	printf("product = %d\n", product);


	quotient = num1/num2;

	printf("quotient = %d\n", quotient);

	modulus = num1 % num2;

	printf("modulus = %d\n", modulus);


	return (0);

}



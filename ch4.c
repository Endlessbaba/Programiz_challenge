#include <stdio.h>

int main()

{
	char ch;

	int value;

	printf("Enter character: ");

	scanf("%c", &ch);

	printf("Enter a signed short value: ");

	scanf("%d", &value);

	printf("You entered character: %c", ch);

	printf("\nYou entered signed short value: %d", value);

	return (0);

}



#include <stdio.h>


int main()

{

	int length;

	int width;

	int perimeter;

	printf("Enter length: ");
	
	scanf("%d", &length);

	printf("Enter width: ");

	scanf("%d", &width);

	perimeter = 2*length + 2*width;

	printf("Perimeter of rectangle = %d\n", perimeter);

	return (0);

}



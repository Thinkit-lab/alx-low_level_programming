#include <stdio.h>

/**
 * main - Entry point
 * description - using the main function
 * Return: Always 0 (Success)
 * return - 0
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;
	char charType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}

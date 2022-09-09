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
	double doubleType;
	char charType;

	printf("Size of int: %d bytes\n",sizeof(integerType));
	printf("Size of float: %d bytes\n",sizeof(floatType));
	printf("Size of double: %d bytes\n",sizeof(doubleType));
	printf("Size of char: %d bytes\n",sizeof(charType));
	return (0);
}

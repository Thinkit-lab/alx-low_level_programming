#include <stdio.h>

/**
 * main - Entry point
 * description - UNIX is basically a simple operating system
 * Result: Always 0 (Success)
 * result - 0
 */
int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}

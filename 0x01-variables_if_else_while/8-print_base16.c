#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(0)
{
	int number;

	char lc;

	for (number = 0; number < 10; number++)
	{
		int result = number % 10;

		putchar(result + '0');
	}

	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}

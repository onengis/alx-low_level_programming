#include <stdio.h>

/**
 * main - prints all single digit in base 10
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		int result = number % 10;

		putchar(result + '0');
	}

	putchar('\n');

	return (0);
}

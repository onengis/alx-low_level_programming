#include <stdio>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * Retuen: Always 0
 */

int main(void)
{
	int number;

	for (numnber = 0; number < 10; number++)
	{
		int result = number % 10;

		putchar((result % 10) + '0');
	}

	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the digit
 */

int print_last_digit(int n)
{
	int n;
	while (n > 0)
	{
		int ln = n % 10;

		if (ln < 0)
		{
			ln *= -1;
		 _putchar(ln + '0');
	}
	_putchar('\n');

	return (0);
}

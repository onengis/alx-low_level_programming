#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the digit
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
	{
		ln *= -1;
	}
	_putchar(ln + '0');

	return (0);
}

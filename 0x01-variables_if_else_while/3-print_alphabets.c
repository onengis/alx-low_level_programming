#include <stdio.h>

/**
 * main - prints alphabet in lowercase and in uppercase
 * Return: Always 0
 */

int main(void)
{
	char lc_up;

	for (lc_up = 'a'; lc_up <= 'z'; lc_up++)
	{
		putchar(lc_up);
	}

	for (lc_up = 'A'; lc_up <= 'Z'; lc_up++)
	{
		putchar(lc_up);
	}
	putchar('\n');

	return (0);
}

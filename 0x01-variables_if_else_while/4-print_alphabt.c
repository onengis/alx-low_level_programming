#include <stdio.h>

/**
 * main - prints all the letters except q and e
 * Return: Always 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);

	}

	putchar('\n');

	return (0);
}

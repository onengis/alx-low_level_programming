#include <stdio.h>

#include <time.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Alaways 0
 */

int main(void)
{
	int num1;

	int num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			if (num2 != num1)
			{
				putchar(num1);
				puchar(num2);
				{
					if (num1 == '8' && num2 == '9')
					continue;

					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	puchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_diagonal - check the code
 *@n: integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int s, a;

	for (s = 0; s < n; s++)
	{
		for (a = 0; a <= s; a++)
		{
			if (a != s)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}


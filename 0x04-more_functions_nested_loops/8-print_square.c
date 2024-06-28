#include "main.h"

/**
 * print_square - check the code
 *@size: integer
 * Return: Always 0.
 */
void print_square(int size)
{
	int m, b;

	if (size >= 10)
		_putchar('\n');
	for (m = 0; m <= size; m++)
	{
		for (b = 0; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
~

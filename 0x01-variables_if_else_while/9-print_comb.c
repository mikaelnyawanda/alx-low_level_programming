#include <stdio.h>
/**
 * main - Prints output
 * Return: Always (Success)
 *
 */
int main(void)
{
	int o;

	o = 48;

	while (o <= 57)
	{
		putchar(o);
	if (o != 57)
	{
		putchar(',');
	putchar(' ');
	}
	o++;
	}
	putchar('\n');
	return (0);
}

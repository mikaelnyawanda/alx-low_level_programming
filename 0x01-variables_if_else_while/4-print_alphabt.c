#include <stdio.h>
/**
 * main - Prints alphabets
 * Return: Always (Success)
 *
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		if (m != 'e' && m != 'q')
		putchar(m);
	putchar('\n');
	return (0);
}

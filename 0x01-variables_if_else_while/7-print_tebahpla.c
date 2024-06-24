#include <stdio.h>
/**
 * main - Prints alphabets
 * Return: Always (Success)
 *
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}

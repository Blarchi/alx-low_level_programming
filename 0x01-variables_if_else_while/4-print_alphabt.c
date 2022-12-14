#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pa;

	for (pa = 'a'; pa <= 'z'; pa++)
	{
		if (pa != 'e' && pa != 'q')
			putchar(pa);
	}
	putchar('\n');

	return (0);
}

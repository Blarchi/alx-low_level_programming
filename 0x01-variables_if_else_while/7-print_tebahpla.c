#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char va;

	for (va = 'z'; va >= 'a'; va--)
		putchar(va);

	putchar('\n');

		return (0);
}

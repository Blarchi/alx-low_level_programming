#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: inputs
 * Return: Always
 */
void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}

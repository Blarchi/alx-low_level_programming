#include "main.h"

/**
 * puts_half - prints half a string
 * @str: inputs
 * Return: Always
 */
void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
		str++;
	}

	str -= (a / 2);
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		str++;
	}

	_putchar('\n');
}

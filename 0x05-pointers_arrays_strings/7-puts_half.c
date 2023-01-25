#include "main.h"

/**
 * puts_half - prints half a string
 * @str: inputs
 * Return: Always
 */
void puts_half(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		a++;
		str++;
	}

	str -= (a / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

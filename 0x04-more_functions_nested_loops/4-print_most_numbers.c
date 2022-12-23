#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int number;

	for (number = 60; number < 70; number++)
	{
		if ((number == 62) || (number == 64))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}

#include "main.h"
#include <stdio.h> 

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int c;
	c = 0;
	{
		while (c < 10)
		{
			_putchar (c + '0');
			c++;
		}
		_putchar ('\n');
	}
}
